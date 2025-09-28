#include <Stepper.h>

//Initialize rotation steps
int rotation=2048;

//Creat stepper object and set pins
Stepper myStepper(rotation, 9, 11, 10, 12);

void setup() {
  // Set speed
  myStepper.setSpeed(13);

}

void loop() {
  myStepper.step(rotation);
}
