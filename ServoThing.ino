//By Michael L.
//This sketch was made to accompany a video found on my YouTube channel under the same name


#include <Servo.h>

Servo myservo;  // create servo object to control the servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(6);  // attaches the servo on pin 6 to the servo object (can be any digital pin)
}

void loop() {
 
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(1000);                       // waits 1000ms for the servo to push the shutter
 
    myservo.write(30);              // tell servo to go to position in variable 'pos'
    delay(5000);                       // backs off and waits 5000ms for the camera to process the photo and reset for the next one
  }

//The values in either delay should be modified to better accommodate your specific camera
//A shorter delay time before the next shot results in a slower time-lapse 
