#define green_LED_pin 2
#define yellow_LED_pin 4
#define red_LED_pin 7
#define to_right_button 12
#define to_left_button 13

#include <Servo.h>
Servo Motor;
int current_direction = 90;

void setup() {

Serial.begin(9600);
Motor.attach(6);
pinMode(green_LED_pin,OUTPUT);
pinMode(yellow_LED_pin,OUTPUT);
pinMode(red_LED_pin,OUTPUT);
pinMode(to_right_button,INPUT_PULLUP);
pinMode(to_left_button,INPUT_PULLUP);
Motor.write(current_direction);
}

void loop() {

if (digitalRead(to_right_button) == LOW && current_direction < 180)
  {current_direction += 5;
  Motor.write(current_direction);
  delay(40);}
else if (digitalRead(to_left_button) == LOW && current_direction > 0)
  {current_direction -= 5;
   Motor.write(current_direction);
  delay(40);}


if (current_direction == 180)
  {digitalWrite(red_LED_pin,HIGH);
  digitalWrite(green_LED_pin,LOW);
  digitalWrite(yellow_LED_pin,LOW);}

else if (current_direction == 0)
  {digitalWrite(green_LED_pin,HIGH);
  digitalWrite(red_LED_pin,LOW);
  digitalWrite(yellow_LED_pin,LOW);}
else
  {digitalWrite(yellow_LED_pin,HIGH);
  digitalWrite(red_LED_pin,LOW);
  digitalWrite(green_LED_pin,LOW);}

Serial.println(current_direction);
}
