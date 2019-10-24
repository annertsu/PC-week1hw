const int switchPin = 2;
const int motorPin = 9;
int switchState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(motorPin, OUTPUT);
  pinMode(switchPin, INPUT);
}

void loop(){
  
  switchState = digitalRead(switchPin);
  
  if (switchState == HIGH) {
    digitalWrite(motorPin, HIGH);
    Serial.println("button pressed");
  }
  
  else {
    digitalWrite(motorPin, LOW);
    Serial.println("not pressed");
  }
  
}
