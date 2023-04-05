import java.awt.Color;

// ********************
// Action handlers
// ********************
public class myActionHandler implements ISystem1ActionHandler
{
  private MainWindow mw;
  
  public myActionHandler (MainWindow mw)
  {
    this.mw = mw;
  }
  
  public void aLEDgreenOff()
  {
    mw.led3_label.setBackground(Color.GRAY);
  }

  public void aLEDgreenOn()
  {
    mw.led3_label.setBackground(Color.GREEN);
  }
  
  public void aLEDredOff()
  {
    mw.led1_label.setBackground(Color.GRAY);
  }
  
  public void aLEDredOn()
  {
    mw.led1_label.setBackground(Color.RED);
  }
  
  public void aLEDyellowOff()
  {
    mw.led2_label.setBackground(Color.GRAY);
  }
  
  public void aLEDyellowOn()
  {
    mw.led2_label.setBackground(Color.YELLOW);
  }
}
