#include <Servo.h>

// define Button pin and servo pin
#define buttonPin 2
#define servoPin 3

// sets up int's to read button and angle for the servo
int buttonRead;
int angle = 90;

//sets up servo object
Servo arm;

void setup() {

  pinMode(buttonPin, INPUT);
  arm.attach(servoPin);
  Serial.begin(9600);

}


void loop() {

  buttonRead = digitalRead(buttonPin);

  if (buttonRead == 1) {

    arm.write(angle);

  } else {

    arm.write(0);

  }

}
