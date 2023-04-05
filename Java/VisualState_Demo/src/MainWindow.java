/**************************************************
 *
 * Copyright (c) 2023 IAR Systems AB.
 *
 * See LICENSE for detailed license information.
 *
 **************************************************/

import java.awt.Color;
import java.awt.Dimension;
import java.awt.Font;
import java.awt.Toolkit;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
import java.awt.event.WindowListener;
import java.util.Locale;
import java.util.concurrent.TimeUnit;

import javax.swing.BorderFactory;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JTabbedPane;
import javax.swing.SwingConstants;
import javax.swing.border.Border;
import javax.swing.border.TitledBorder;

public class MainWindow extends JFrame
{
  // Labels and Buttons
  JButton but1_button = null;
  JButton but2_button = null;
  JButton exit_button = null;
  JLabel led1_label = null;
  JLabel led2_label = null;
  JLabel led3_label = null;

  JTabbedPane min = null;
  JPanel app_panel = null;

  TitledBorder main_title = null;

  // Instantiate Visual State design
  ISystem1ActionHandler vs_handler = null;
  System1 vs = null;
  simpleEventHandler event_queue = null;


  // Window sizes
  public int frame_width = 640;
  public int frame_height = 480;
  public int panel_width = 610;
  public int panel_height = 430;

  // Distances of elements
  int component_height = 28;

  public static final long serialVersionUID = 808537414;

  public static void main(String[] args)
  {
    try
    {
      // Set GUI language to English
      Locale.setDefault(Locale.ENGLISH);
      JOptionPane.setDefaultLocale(Locale.ENGLISH);

      new MainWindow();
    }
    catch (Exception ex)
    {
      JOptionPane.showMessageDialog(null, "Main routine \n"+ex.getMessage()+"\n");  
    }
  }

  MainWindow() throws Exception
  {
    super("IAR Visual State - Java demo");

    setLayout(null);
    setDefaultCloseOperation(JFrame.DO_NOTHING_ON_CLOSE);

    WindowListener close_main = new WindowAdapter()
    {
      public void windowClosing(WindowEvent e)
      {
        try
        {
          exit_routine();
        }

        catch (Exception ex)
        {
          JOptionPane.showMessageDialog(null, "WindowListener \n"+ex.getMessage()+"\n");
        }
      }
    };
    addWindowListener(close_main);

    main_panel_create();

    // Create panes
    min = new JTabbedPane();
    min.addTab("Example application", app_panel);
    min.setBounds(5, 5, panel_width + 10, panel_height + 10);
    add(min);

    // Create elements for app-screen
    app_label_create();
    app_button_create();

    pack();
    setSize(frame_width,frame_height);
    Dimension screen_size = Toolkit.getDefaultToolkit().getScreenSize();

    // set window position according to screen size
    if (screen_size.width>frame_width && screen_size.height>frame_height)
    {
      setLocation ((screen_size.width-getSize().width)/2,(screen_size.height-getSize().height)/2);
    }

    setResizable(false);
    setVisible(true);

    // Setup state machine and event handler
    vs_handler = new myActionHandler (this);
    vs = new System1(vs_handler);
    vs.vsInitAll();
    event_queue = new simpleEventHandler();

    // Reset state machine
    event_queue.add(System1.SE_RESET);

    while(true)
    {
      try
      {
        TimeUnit.MILLISECONDS.sleep(1);
      }
      catch (InterruptedException e)
      {
        e.printStackTrace();
      }

      if (event_queue.queueEmpty() == false)
      {
        vs.vsDeduct(event_queue.get());
      }
    }
  }


  // ********************
  // Create main panel
  // ********************
  public void main_panel_create() throws Exception
  {
    //
    // Panel for app
    //
    app_panel = new JPanel();
    app_panel.setLayout(null);
    app_panel.setSize(panel_width, panel_height);
  }


  // ********************
  // Create app labels
  // ********************
  public void app_label_create() throws Exception
  {
    Border blackline = BorderFactory.createLineBorder(Color.black);
    
    // ********************
    // LED1 Label
    // ********************
    led1_label = new JLabel();
    led1_label.setBounds(40, 105, 150, 150);
    led1_label.setText("LED 1");
    led1_label.setForeground(Color.BLACK);
    led1_label.setFont((new Font("Arial", Font.BOLD, 24)));
    led1_label.setBorder(blackline);
    led1_label.setBackground(Color.GRAY);
    led1_label.setOpaque(true);
    led1_label.setHorizontalAlignment(SwingConstants.CENTER);
    led1_label.setVerticalAlignment(SwingConstants.CENTER);
    app_panel.add(led1_label);

    // ********************
    // LED2 Label
    // ********************
    led2_label = new JLabel();
    led2_label.setBounds(230, 105, 150, 150);
    led2_label.setText("LED 2");
    led2_label.setForeground(Color.BLACK);
    led2_label.setFont((new Font("Arial", Font.BOLD, 24)));
    led2_label.setBorder(blackline);
    led2_label.setBackground(Color.GRAY);
    led2_label.setOpaque(true);
    led2_label.setHorizontalAlignment(SwingConstants.CENTER);
    led2_label.setVerticalAlignment(SwingConstants.CENTER);
    app_panel.add(led2_label);

    // ********************
    // LED3 Label
    // ********************
    led3_label = new JLabel();
    led3_label.setBounds(420, 105, 150, 150);
    led3_label.setText("LED 3");
    led3_label.setForeground(Color.BLACK);
    led3_label.setFont((new Font("Arial", Font.BOLD, 24)));
    led3_label.setBorder(blackline);
    led3_label.setBackground(Color.GRAY);
    led3_label.setOpaque(true);
    led3_label.setHorizontalAlignment(SwingConstants.CENTER);
    led3_label.setVerticalAlignment(SwingConstants.CENTER);
    app_panel.add(led3_label);
  }


  // ********************
  // Create app buttons
  // ********************
  public void app_button_create() throws Exception
  {
    // ********************
    // BUT1 button
    // ********************
    but1_button = new JButton("BUT1");
    but1_button.setBounds(65, 370, 100, component_height);
    but1_button.setBackground(Color.lightGray);
    app_panel.add(but1_button);

    myActionListener but1_pressed = new myActionListener(this);
    but1_button.addActionListener(but1_pressed);

    // ********************
    // BUT2 button
    // ********************
    but2_button = new JButton("BUT2");
    but2_button.setBounds(255, 370, 100, component_height);
    but2_button.setBackground(Color.lightGray);
    app_panel.add(but2_button);

    myActionListener but2_pressed = new myActionListener(this);
    but2_button.addActionListener(but2_pressed);

    // ********************
    // Exit button
    // ********************
    exit_button = new JButton("Exit");
    exit_button.setBounds(445, 370, 100, component_height);
    exit_button.setBackground(Color.lightGray);
    app_panel.add(exit_button);

    myActionListener exit_pressed = new myActionListener(this);
    exit_button.addActionListener(exit_pressed);
  }


  // ********************
  // Program exit
  // ********************
  public void exit_routine() throws Exception
  {
    System.exit(0);
  }
}  
