/**************************************************
 *
 * Copyright (c) 2023 IAR Systems AB.
 *
 * See LICENSE for detailed license information.
 *
 **************************************************/

import java.util.ArrayList;

// ********************
// Event handler
// ********************
public class simpleEventHandler
{
  static ArrayList<Byte> m_theQueue = new ArrayList<>();

  public simpleEventHandler()
  {
    m_theQueue.clear();
  }

  public boolean add(byte nEvent)
  {
    m_theQueue.add(nEvent);
    return true;
  }

  public byte get()
  {
    byte nEvent = System1.EVENT_UNDEFINED;

    if (m_theQueue.size() > 0)
    {
      nEvent = m_theQueue.get(0);
      m_theQueue.remove(0);
    }
    return nEvent;    
  }

  public boolean queueEmpty()
  {
    if (m_theQueue.size() == 0)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
}
