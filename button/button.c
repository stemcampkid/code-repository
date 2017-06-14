/* Miles Thompson 
  Program #5
  use a button to turn on and off a LED
  6/14/17
   
*/
#include "simpletools.h"                      

int main()                                   
{
  

 
  while(1)
  {
    if (input(0) == 0)
    { 
    putChar(HOME);
    print ("The button is pressed %c\n", CLREOL );
    high(26);
    low(27);
    }
    else
    {
      putChar(HOME);
      print("The button is not pressed %c\n", CLREOL);
      low(26);
      high(27);
    }         
    pause (100);
  }  
}
