/*
  Miles Thompson 
  Program #2
  Blink a LED
  6/12/17
*/
#include "simpletools.h"                      
int main()                                   
{
  while(1)
  {
   high(0);
   pause(10);
   low(0);
   pause(10);
   high(8);
   pause(5);
   low(8);
   pause(5);
    
  }  
}
