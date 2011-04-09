/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/31/2011 11:29:02 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brent Ritzema (), thetechtouchdutch@gmail.com
 *        Company:  thetechtouch
 *
 * =====================================================================================
 */

#include <iostream>
#include "../common/engine.h"

using namespace std;

bool yes = false;

void Draw();
void TestMenu();
void Input();

int main()
{
   engine->SetupWindow(600,600,8,"Game");
   engine->GetRenderSub()->AddSub(&TestMenu);
   engine->GetEventSub()->AddSub(&Input);
   engine->Update();
   return 0;
}

void Draw()
{
   sf::Image img_Man;
   img_Man.LoadFromFile("../media/Man.png");
   sf::Sprite spt_Man(img_Man);
   spt_Man.SetPosition(20,20);
   engine->GetWindow()->Draw(spt_Man);
}

void TestMenu()
{
   Menu menu(20,20,60);
   int i;
   i++;
   menu.AddChoice("Test", &Draw);
   menu.AddChoice("Test", NULL);
   menu.AddChoice("Test", NULL);
   engine->GetWindow()->Draw(*(menu.GetChoice(0)->GetText()));
   engine->GetWindow()->Draw(*(menu.GetChoice(1)->GetText()));
   engine->GetWindow()->Draw(*(menu.GetChoice(2)->GetText()));
   menu.GetChoice(0)->GetText()->SetCharacterSize(i);
   menu.GetChoice(0)->GetText()->SetColor(sf::Color(200,200,0));
   if(yes == true)
   menu.CallFunc(0);
}

void Input()
{
   if(engine->GetEventHandler()->Type == sf::Event::KeyPressed)

      switch(engine->GetEventHandler()->Key.Code)
      {
         case sf::Key::Escape:
         engine->Exit();
         break;

         case sf::Key::Y:
         yes = true;
         break;

         default:
         break;
      }

}
