#include "menu.h"

Menu::Menu(int x, int y, int space)
{
   m_x = x;
   m_y = y;
   m_next = 0;
   m_space = space;
   m_count = 0;
}

void Menu::AddChoice(string text, void (*pfunc)())
{
   Choice * temp = new Choice(text, pfunc);
   m_choice.push_back(temp);
   temp = NULL;
   m_choice.at(m_count)->GetText()->SetPosition(m_x,m_y+m_next);
   m_count++;
   m_next+=m_space;
}

void Menu::RemoveChoice(int choice)
{
   delete m_choice.at(choice);
   m_choice.erase(m_choice.begin()+choice);
}

void Menu::CallFunc(int choice)
{
   m_choice.at(choice)->CallFunc();
}

