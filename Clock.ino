#include <Wire.h>
#include <LCD_I2C.h>

LCD_I2C lcd(0x27, 16, 2);

int hours = 12;
int minutes = 21;
int seconds = 47;
bool isPM = true;

void setup() {
  lcd.begin();
  lcd.backlight();
  lcd.setCursor(0, 0);

  displayTime();
}

void loop() {
  delay(1000); // Wait for 1 second
  updateTime();
  displayTime();
}

void updateTime() {
  seconds++;
  if (seconds >= 60) {
    seconds = 0;
    minutes++;
    if (minutes >= 60) {
      minutes = 0;
      hours++;
      if (hours >= 12) {
        hours = 0;
        isPM = !isPM; // Toggle AM/PM
      }
    }
  }
}

void displayTime() {
  lcd.setCursor(0, 0);

  int displayHours;
  
  if(hours == 0){
    displayHours = 12;
  }else{
    displayHours = hours;
  }

  if (displayHours < 10) {
      lcd.print("0");
  }
  lcd.print(displayHours);
  
  lcd.print(":");

  if (minutes < 10){
    lcd.print("0");
  }

  lcd.print(minutes);
  lcd.print(":");

  if (seconds < 10) lcd.print("0");
  lcd.print(seconds);
  
  if(isPM){
    lcd.print("PM");
  }
  else{
    lcd.print("AM");
  }

}
