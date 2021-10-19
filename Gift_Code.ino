#include <Servo.h>

// define Button pin and servo pin
#define buttonPin 2
#define servoPin 3

// sets up int's to read button and angle for the servo
int buttonRead;
int angle = 90;

//sets up servo object
Servo arm;

// random int to deside what personality is active
int who = random(2);


void setup() {

  pinMode(buttonPin, INPUT);
  arm.attach(servoPin);
  Serial.begin(9600);

}


void loop() {

  if (who == 1) {

    twitch();

  } else {

    meslion();

  }

}


// setup for twitch's personality
void twitch() {

  buttonRead = digitalRead(buttonPin);

  if (buttonRead == 1) {

    arm.write(angle + 2);
    arm.write(angle);
    arm.write(angle - 2);

  } else {

    arm.write(2);
    arm.write(0);

  }

}


// setup for meslion's personality
void meslion() {

  buttonRead = digitalRead(buttonPin);

  if (buttonRead == 1) {
                                            // hehe nice
    arm.write(angle);

  } else {

    arm.write(0);

  }

}