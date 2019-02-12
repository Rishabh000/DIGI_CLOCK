#include<LiquidCrystal.h>      
int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3 , d7 = 2;
int h, m ,s;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  
  //setting up the LCD's number of columns and rows
  
  lcd.begin(16,2);
  lcd.setCursor(2,0);
  lcd.print("DIGI CLOCK :)");
  delay(1500);
  lcd.clear();
  
  
} 

void loop() {
  // put your main code here, to run repeatedly:
  for(h = 0; h < 24; h++){
    
    for(m= 0; m < 60; m++){
      lcd.setCursor(5,0);
      lcd.print("HH MM SS");
      lcd.setCursor(5,1);
      if(h < 10){
      
      lcd.print(0);
      }
      
      
      lcd.print(h);
      lcd.setCursor(8,1);
      if(m<10){
        lcd.print(0);
      }
      lcd.print(m);
      for(s= 0; s < 60; s++){
       
        lcd.setCursor(11,1);
        if(s < 10)
        lcd.print(0);
        lcd.print(s);
        delay(1000);
       
      }
      lcd.clear();
      lcd.setCursor(4,1);
    }
  }

  }
