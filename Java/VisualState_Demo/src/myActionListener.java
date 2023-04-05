/**************************************************
 *
 * Copyright (c) 2023 IAR Systems AB.
 *
 * See LICENSE for detailed license information.
 *
 **************************************************/

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JOptionPane;

// ********************
// Action listeners
// ********************
public class myActionListener implements ActionListener
{
  private MainWindow mw;
  
  public myActionListener (MainWindow mw)
  {
    this.mw = mw;
  }

  public void actionPerformed(ActionEvent e)
  {
    try
    {
      JButton button = (JButton)e.getSource();

      // but1 button
      if (button == mw.but1_button)
      {
        mw.event_queue.add(System1.eButton1);
      }

      // but2 button
      if (button == mw.but2_button)
      {
        mw.event_queue.add(System1.eButton2);
      }
      
      // exit button
      if (button == mw.exit_button)
      {
        mw.exit_routine();
      }
    }

    catch (Exception ex)
    {
      JOptionPane.showMessageDialog(null, "ActionListener \n"+ex.getMessage() + "\n");
    }
  }
}
