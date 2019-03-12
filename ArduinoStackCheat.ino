#include <Servo.h> // The 'Cheat' will need a servo motor to run

#define SERVO_PIN 5
Servo servo;

void setup() {
    pinMode(SERVO_PIN, OUTPUT); 
    servo.attach(SERVO_PIN); // Assign the pin that the Servo will be attached to
}

void loop() {
    
}