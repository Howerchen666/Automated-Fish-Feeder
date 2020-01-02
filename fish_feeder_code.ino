#include <Servo.h> 

Servo myservo;

//state 0 is auto mode, state 1 is manual
int state = 0;
long previousMillis = 0;

int mode = 11;
const int button = 10;
const int led = LED_BUILTIN;

const long interval = 172800000;

void setup() {
  //attaching servo to pin 9
  myservo.attach(9);
  pinMode(button, INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  
  //changing mode
  if (digitalRead(mode) == HIGH){
    state ++;
    if (state == 2){
      state = 0;
    }
  }

  //manual mode
  if (state == 1){
    //changing led state to HIGH
    digitalWrite(led, HIGH);
    
    if (digitalRead(button) == HIGH){
      myservo.write(0);
      delay(2000);
      myservo.write(90);
      }
  }

  unsigned long currentMillis = millis();
    if (currentMillis - previousMillis >= interval) {
      previousMillis = currentMillis; 
      if (state == 0){
        myservo.write(0);
        delay(2000);
        myservo.write(90);
        }
    }
    
  if (state == 0 ){
     //changing led state to LOW
     digitalWrite(led,LOW);
  }
}
