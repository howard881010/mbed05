#include "mbed.h"
#include "TextLCD.h"

TextLCD lcd(D2, D3, D4, D5, D6, D7);

int main()
{
      int i;
      lcd.printf("107061240\n");

      while(true)
      {
            for(i=30; i>=0; i--){
		    lcd.locate(5, 1);
                lcd.printf("%02i", i);
                wait(1);
            }
      }
}