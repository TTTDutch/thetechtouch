#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <map>
#include <vector>
#include <string>
#include "engine.h"

struct Choice;

class Menu
{
   public:
   Menu(int x, int y, int space);
   void AddChoice(string text, void (*pfunc)());
   void RemoveChoice(int choice);
   void CallFunc(int choice);
   vector<Choice*> * GetChoices() { return &m_choice; }
   Choice * GetChoice(int choice) { return m_choice[choice]; }

   private:
   vector <Choice*> m_choice;
   int m_x,m_y,m_next;
   int m_space;
   int m_count;
};

struct Choice
{
   void (*m_pfunc)();
   sf::Text text;
};

#endif
