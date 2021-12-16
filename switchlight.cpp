// C++ code

// load LCD library
#include <LiquidCrystal.h>

// set crystal pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int BTN = 9;
const int LED = 8;
int num = 0;


void setup()
{
    pinMode(BTN, INPUT);
    pinMode(LED, OUTPUT);
	Serial.begin(9600);
  
    // set LCD size 
    lcd.begin(16,2);

    // set start
    lcd.setCursor(0,0);
    lcd.print("Press button to: ");
  	lcd.setCursor(0,1);
  	lcd.print("Switch light on ");
}

void loop()
{ 
    // schrijf hier tussen je code 
  if (digitalRead(BTN) == HIGH) {
    if (num == 0) {
      delay(200);
      digitalWrite(LED, LOW);
      lcd.setCursor(0,0);
      lcd.print("Press button to: ");
      lcd.setCursor(0,1);
      lcd.print("Switch light on ");
      num = 1;
      Serial.println("Light is off");     
  	} else {
      delay(200);
      digitalWrite(LED, HIGH);
      lcd.setCursor(0,0);
      lcd.print("Press button to: ");
      lcd.setCursor(0,1);
      lcd.print("Switch light off ");    	
      num = 0;
      Serial.println("Light is on");
  	}
   
  } 

    // schrijf hier tussen je code
}

// schrijf hier tussen je eventuele function(s)

// schrijf hier tussen je eventuele function(s)