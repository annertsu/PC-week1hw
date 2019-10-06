#include "pitches.h"

//allocate digital pin numbers below
int buttonRed = 13;
int ledRed = 12;
int buttonYellow = 11;
int ledYellow = 10;
int buttonGreen = 9;
int ledGreen = 8;
int buttonBlue = 7;
int ledBlue = 6;
int piezoRed = 5;
int piezoYellow = 4;
int piezoGreen = 3;
int piezoBlue = 2;

//initial state of the button and the goal
int stateRed = 0;
int stateYellow = 0;
int stateGreen = 0;
int stateBlue = 0;
int goal = 100;

//initial state of the counter (what is the difference between stateRed and counterRed in this case???)
int counterRed = 0;
int counterYellow = 0;
int counterGreen = 0;
int counterBlue = 0;
int blinkRed = 0;
int blinkYellow = 0;
int blinkGreen = 0;
int blinkBlue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(buttonRed, INPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(buttonYellow, INPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(buttonGreen, INPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(buttonBlue, INPUT);
  pinMode(ledBlue, OUTPUT);
  //pinMode(buttonStart, INPUT);
  //pinMode(ledStart, OUTPUT);
}

void loop() {

  stateRed = digitalRead(buttonRed);
  stateYellow = digitalRead(buttonYellow);
  stateGreen = digitalRead(buttonGreen);
  stateBlue = digitalRead(buttonBlue);
  //stateStart = digitalRead(buttonStart);

  //when the button is pressed
  if (stateRed == HIGH) {
    counterRed++; //simplified version of counterRed = counterRed + 1
    delay(200); //Why do I need delay() here???
  } 

  //when the button reaches the goal number
  if ((counterRed == goal) && (blinkRed <= 5)) { //why is it less than or equal to???
    digitalWrite(ledRed, HIGH);
    delay(100);
    digitalWrite(ledRed, LOW);
    delay(100);
    digitalWrite(ledRed, HIGH);
    blinkRed++;
    //why does this not work instead???
    //if (blinkRed <= 5) {
      //digitalWrite(ledRed, HIGH);
    //}
    tone(piezoRed, NOTE_C1); //why does the volume decrease everytime??
  }

  else {
    noTone(piezoRed);
  }
  

  if (stateYellow == HIGH) {
    counterYellow++;
    delay(200);
  }

  if ((counterYellow == goal) && (blinkYellow <= 5)) {
    digitalWrite(ledYellow, HIGH);
    delay(100);
    digitalWrite(ledYellow, LOW);
    delay(100);
    digitalWrite(ledYellow, HIGH);
    blinkYellow++;
    tone(piezoYellow, NOTE_C1);
  }

  else {
    noTone(piezoYellow);
  }

  if (stateGreen == HIGH) {
    counterGreen++;
    delay(200);
  }

  if ((counterGreen == goal) && (blinkGreen <= 5)) {
    digitalWrite(ledGreen, HIGH);
    delay(100);
    digitalWrite(ledGreen, LOW);
    delay(100);
    digitalWrite(ledGreen, HIGH);
    blinkGreen++;
    tone(piezoGreen, NOTE_C1);
  }

  else {
    noTone(piezoGreen);
  }

  if (stateBlue == HIGH) {
    counterBlue++;
    delay(200);
  }

  if ((counterBlue == goal) && (blinkBlue <= 5)) {
    digitalWrite(ledBlue, HIGH);
    delay(100);
    digitalWrite(ledBlue, LOW);
    delay(100);
    digitalWrite(ledBlue, HIGH);
    blinkBlue++;
    tone(piezoBlue, NOTE_C1);
  }

  else {
    noTone(piezoBlue);
  }

  if (((blinkRed >= 6) && (blinkYellow >= 6) && (blinkGreen >= 6)) || ((blinkRed >= 6) && (blinkYellow >= 6) && (blinkBlue >= 6)) || ((blinkRed >= 6) && (blinkGreen >= 6) && (blinkBlue >= 6)) || ((blinkYellow >= 6) && (blinkGreen >= 6) && (blinkBlue >= 6))){ 
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledGreen, HIGH);
    delay(200);
    digitalWrite(ledYellow, HIGH);
    digitalWrite(ledBlue, HIGH);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledGreen, LOW);
    delay(200);
    digitalWrite(ledYellow, LOW);
    digitalWrite(ledBlue, LOW);
  }
  
}
 
