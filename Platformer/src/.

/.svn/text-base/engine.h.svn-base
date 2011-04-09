/*
 * =====================================================================================
 *
 *       Filename:  engine.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/01/2011 05:30:45 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brent Ritzema (), thetechtouchdutch@gmail.com
 *        Company:  thetechtouch
 *
 * =====================================================================================
 */

#ifndef ENGINE_H
#define ENGINE_H

#include <string>
#include <iostream>
#include <SFML/Graphics.hpp>
#include <GL/glew.h>
#include <SFML/OpenGL.hpp>
#include "subscribe.h"
#include "menu.h"

using namespace std;

class Engine
{
   public:
   void SetupWindow(int Width, int Height, int Colorbit, string Title);

   static Engine * Instance()
   {
      static Engine m_engine;
      return &m_engine;
   }
   
   void Update();
   
   void Exit();

   int GetHeight() { return m_height; }
   int GetWidth() { return m_width; }
   string GetTitle() { return m_title; }
   sf::RenderWindow * GetWindow() { return m_window; }
   sf::Event * GetEventHandler() { return &m_event; }
   Subscribe * GetRenderSub() { return &m_Render; }
   Subscribe * GetEventSub() { return &m_Event; }

   private:
   Engine() {}
   Subscribe m_Render;
   Subscribe m_Event;
   sf::Event m_event;
   int m_width;
   int m_height;
   int m_colorbit;
   string m_title;
   sf::RenderWindow * m_window;
};

#define engine Engine::Instance()
   
#endif
