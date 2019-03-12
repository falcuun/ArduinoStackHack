#include <Servo.h>

#define MOTOR_PIN 5

Servo servo;
void setup(){
    pinMode(MOTOR_PIN, OUTPUT);
    servo.attach(MOTOR_PIN);
}
void loop(){
    servo.write(180);
    delay(400);
    servo.write(-180);
    delay(400);
}