//Basics of Using a Serial Monitor
//Digital pin 2 reads the HIGH or LOW state of the circuit and prints the data information on to the serial monitor

void setup() {
  Serial.begin(9600); //9600 is the baud rate, which is the speed of bits per second
  pinMode(2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int state = digitalRead(2);
  Serial.println(state); //this prints the info on to the serial monitor
  //delay(1);
}
