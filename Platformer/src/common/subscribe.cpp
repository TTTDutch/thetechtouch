/*
 * =====================================================================================
 *
 *       Filename:  subscribe.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/01/2011 06:30:38 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brent Ritzema (), thetechtouchdutch@gmail.com
 *        Company:  thetechtouch
 *
 * =====================================================================================
 */

#include "subscribe.h"

void Subscribe::AddSub( void (*pfunc)())
{
   subs.push_back(pfunc);
   index++;
}

void Subscribe::CallAll()
{
   for(int i = 0; i < index; i++)
      subs[i]();
}

void Subscribe::CallSub(int num)
{
   subs[num]();
}

void Subscribe::RemoveSub(int num)
{
   subs.erase(subs.begin()+num);
}

