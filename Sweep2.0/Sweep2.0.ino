/* Sweep
 by BARRAGAN <http://barraganstudio.com> 
 Updated and emotion enabled by: po lyu and ben anding
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/ 

#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
                // twelve servo objects can be created on most boards
byte incomeByte; 
int pos = 0;    // variable to store the servo position 
void unlock();
void lock();

 
void setup() 
{ 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
  Serial.begin(9600);
   // for(pos = 0; pos <= 90; pos += 1) // goes from 0 degrees to 180 degrees 
  //{                                  // in steps of 1 degree 
   // myservo.write(pos);              // tell servo to go to position in variable 'pos' 
   // delay(15);                       // waits 15ms for the servo to reach the position 
  //} 
    if(Serial.available()>0)
  { 
   incomeByte = Serial.read();
   Serial.print(incomeByte);
   Serial.print("\n");
   if (incomeByte==48 || incomeByte==82) 
   {
    unlock(); 
   } 
   if (incomeByte==49 || incomeByte==76) { 
    lock();    
  }
}
}


void unlock() 
{
    for(pos = 90; pos>=0; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
   myservo.write(20);              // tell servo to go to position in variable 'pos' 
    //delay(15);                       // waits 15ms for the servo to reach the position 
  } 
}

void lock()
{
    for(pos = 0; pos <= 90; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
   myservo.write(90);              // tell servo to go to position in variable 'pos' 
   //delay(15);                       // waits 15ms for the servo to reach the position 
  } 
}

void loop() 
{ 
  if(Serial.available()>0)
  { 
   incomeByte = Serial.read();
   Serial.print(incomeByte);
   Serial.print("\n");
   if (incomeByte==48) 
   {
    unlock(); 
   } 
   if (incomeByte==49) { 
    lock();    
  }

} 
}


