#include <Wire.h>
#include <LCD_I2C.h>
#include <DHT.h>

LCD_I2C lcd(0x27,16,2);
  
#define DHTPIN 7  
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

int t;

void setup()
{
    dht.begin();
    lcd.begin();
    lcd.backlight(); 
}

void loop()
{

    t = dht.readTemperature(); 

    lcd.setCursor(0, 0);
    lcd.println("Temperature     ");
    
    lcd.setCursor(0, 1);
    lcd.print(t);
    lcd.print("C");
    
  delay(1000);
}

