#include <Servo.h> // The 'Cheat' will need a servo motor to run

#define SERVO_PIN 5
Servo servo;

void setup()
{
    pinMode(SERVO_PIN, OUTPUT);
    servo.attach(SERVO_PIN); // Assign the pin that the Servo will be attached to
}

void loop()
{
    servo.write(180); // Tell the servo to turn 180 Degrees
    delay(400); // Wait for 400 ms
    servo.write(-180); // Tell the servo to turn 180 Degrees back
    delay(400); // Wait for 400 ms

    /*
     * In 'Stack' when you click the first panel, it takes 400 ms for next one to appear and get to them middle.
     * When it gets to the middle, the servo will have already turned and clicked the next panel.
     * We give the servo 400 Milliseconds in order to release the click on the screen for the next panel to come in. 
     */
}