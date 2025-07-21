#include <Servo.h>

Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;

int pos = 0;
unsigned long startTime;
void setup() {
	myservo1.attach(2); 
  	myservo2.attach(5); 
  	myservo3.attach(8); 
  	myservo4.attach(11); 
	startTime = millis();
}

void loop() {
  if(millis() - startTime <= 2000){
for (pos = 0; pos <=180; pos +=1){
	myservo1.write(pos);
  	myservo2.write(pos);
  	myservo3.write(pos);
  	myservo4.write(pos);
	delay(5);}

for (pos = 180; pos >=0; pos -=1){
	myservo1.write(pos);
  	myservo2.write(pos);
  	myservo3.write(pos);
  	myservo4.write(pos);
	delay(5);}
  }
  	else {
    myservo1.write(90);
    myservo2.write(90);
    myservo3.write(90);
    myservo4.write(90);
    delay(15);
    }
}