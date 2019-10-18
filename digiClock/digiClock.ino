#include<LiquidCrystal.h>      
int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3 , d7 = 2;
int i, j ,k;

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
  for(i = 0; i < 24; i++){
    
    for(j= 0; j < 60; j++){
      lcd.setCursor(5,0);
      lcd.print("II JJ KK");
      lcd.setCursor(5,1);
      if(i < 10){
      
      lcd.print(0);
      }
      
      
      lcd.print(i);
      lcd.setCursor(8,1);
      if(j<10){
        lcd.print(0);
      }
      lcd.print(j);
      for(k= 0; k < 60; k++){
       
        lcd.setCursor(11,1);
        if(k < 10)
        lcd.print(0);
        lcd.print(k);
        delay(1000);
       
      }
      lcd.clear();
      lcd.setCursor(4,1);
    }
  }

  }
