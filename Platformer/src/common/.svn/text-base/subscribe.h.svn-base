/*
 * =====================================================================================
 *
 *       Filename:  subscribe.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/01/2011 06:24:36 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brent Ritzema (), thetechtouchdutch@gmail.com
 *        Company:  thetechtouch
 *
 * =====================================================================================
 */

#ifndef SUBSCRIBE_H
#define SUBSCRIBE_H

#include <vector>
#include <iostream>

using namespace std;

class Subscribe
{
   public:
   Subscribe() { index = 0; }
   void AddSub( void (*pfunc)());
   void CallAll();
   void RemoveSub(int num);
   void CallSub(int num);

   private:
   vector < void (*)() > subs;
   int index;

};

#endif 
