int switchState = 0;

// put your setup code here, to run once when the Arduino is powered on

void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

// put your main code here, to run repeatedly after the set up is completed:

void loop() {

  switchState = digitalRead(2);

  if (switchState == LOW) { //if the button is not pressed
    digitalWrite(3, HIGH); //green
    digitalWrite(4, LOW);  //red
    digitalWrite(5, LOW); //red
  } 
  
  else {
    digitalWrite(3, LOW);  //green
    digitalWrite(4, HIGH);  //red
    digitalWrite(5, HIGH);  //red
    delay(250);
    digitalWrite(4, HIGH);  //red
    digitalWrite(5, LOW);  //red
    delay(250);
  } 
   
}



  
  
