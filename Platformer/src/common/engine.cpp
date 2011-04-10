/*
 * =====================================================================================
 *
 *       Filename:  engine.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/01/2011 05:38:22 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brent (), thetechtouchdutch@gmail.com
 *        Company:  thetechtouch
 *
 * =====================================================================================
 */

#include "engine.h"

void Engine::SetupWindow(int width, int height, int colorbit, string title)
{
   
   m_width = width; m_height = height; m_colorbit = colorbit; m_title = title;
   m_window = new sf::RenderWindow(sf::VideoMode(m_height,m_width,m_colorbit), m_title);
}

void Engine::Update()
{
   while(m_window->IsOpened())
   {
      while(m_window->GetEvent(m_event))
      {
         if(m_event.Type == sf::Event::Closed)
            Exit();
         if(m_event.Type == sf::Event::Resized)
         {
            m_width = m_event.Size.Width;
            m_height = m_event.Size.Height;
         }
         m_Event.CallAll();
      }

      m_window->Clear();
      m_Render.CallAll();
      m_window->Display();
   }
}

void Engine::Exit()
{
   delete m_window;
   m_window->Close();
}
