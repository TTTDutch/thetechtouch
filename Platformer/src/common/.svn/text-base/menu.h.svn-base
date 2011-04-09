#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <map>
#include <vector>
#include <string>
#include "engine.h"

class Choice;

class Menu
{
   public:
   Menu(int x, int y, int space, sf::Image Shader);
   void AddChoice(sf::Image img, void (*pfunc)());
   void RemoveChoice(int choice);
   void CallCurrentChoice();
   void SetShaderImage(sf::Image Shader);
   void SetShaderChoice(int choice);
   void Update(sf::RenderWindow *app);
   void Shader_Up();
   void Shader_Down();
   sf::Sprite * GetShader() {return &m_shader; }
   vector<Choice> * GetChoices() { return &m_choice; }
   Choice * GetChoice(int choice) { return &m_choice[choice]; }

   private:
   vector <Choice> m_choice;
   int m_x,m_y,m_next;
   int m_space;
   int m_count;
   int m_current;
   int m_previous;
   sf::Image m_img;
   sf::Sprite m_shader;
};

class Choice
{
   public:
   Choice(sf::Image img, void (*pfunc)()) { this->pfunc = pfunc; m_spt.SetImage(img); }
   sf::Sprite* GetSprite() { return &m_spt; }
   void CallFunc() { pfunc(); }
   private:
   void (*pfunc)();
   sf::Sprite m_spt;
};

#endif
