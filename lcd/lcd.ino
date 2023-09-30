#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2); // Bu kodu kullanırken ekranda yazı çıkmaz ise 0x27 yerine 0x3f yazınız !!



void setup() {
  lcd.begin();

}

void loop() {
  // üst satırda / alt satırda \ olsun ve bu bir milisaniye ile ilerlemeye devam etsin

  lcd.print("5");
  
lcd.setCursor(2, 1);
lcd.print("hello, world!");
 
}
