#include <LiquidCrystal.h>
double vs = 0;
double van = 0;
double x1 = 0;
double x2 = 0;
double a = 0.0149;
double b= -0.5373;
double c
LiquidCrystal lcd(12,11,5,4,3,2);

void setup() 
{
 pinMode(A0,INPUT);
 lcd.begin(16,2);
 lcd.clear();
 lcd.print("Sensor CNY-70");
}

void loop()
{
  c = 3.9089;
  vs= analogRead(A0);
  van = (vs*5)/1023;
  c = c-van;
  //x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
  x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
  lcd.setCursor(0,1);
  lcd.print("Distance: ");
  lcd.print(x2);
  lcd.print("mm");
  //Serial.println(x1);  //este no es el valor correcto 
  delay (1000);
}
