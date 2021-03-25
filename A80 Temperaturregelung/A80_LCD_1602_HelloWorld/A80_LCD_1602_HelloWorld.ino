#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// LCD Addresse 0x27 für 16 Zeichen und 2 Zeilen
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
	lcd.begin();
	lcd.backlight();
	lcd.print("Hello, world!");
}
void loop()
{
	// ...
}
