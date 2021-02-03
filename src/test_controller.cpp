#include <Arduino.h>

const int left_button = 27;
const int right_button = 25;
int button_L_state = 0;      
int button_R_state = 0;    


void setup() {
  pinMode(left_button, INPUT);
  pinMode(right_button, INPUT);
  Serial.begin(19200);
}

void loop() {


  button_L_state = (digitalRead(left_button));
  button_R_state = (digitalRead(right_button));

  Serial.print("left:");
  Serial.println(digitalRead(left_button));

  Serial.println("----------");

  Serial.print("right:");
  Serial.println(digitalRead(right_button));
  
  Serial.println("----------");

  if (button_L_state == 1 && button_R_state == 1  ) {
  Serial.print("LED on");
  Serial.println(digitalRead(right_button));
  
  Serial.println("----------");
  }
    
 
  delay(500);
}