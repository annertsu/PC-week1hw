int analogPin = 0;
long anVolt, mm, inches; //what does long exactly mean???

void setup() {
  Serial.begin(9600);
  //pinMode(A0, INPUT);
}

void read_sensor (){
  anVolt = analogRead(analogPin);
  mm = anVolt*5; //Takes bit count and converts it to mm
  //inches = mm/25.4; //Takes mm and converts it to inches
}

void print_range (){
  //Serial.print("S1");
  //Serial.print("=");
  //Serial.println(mm);
  //Serial.print(" ");
  //Serial.println(inches); because i can't read inches
}

void loop () {
  read_sensor();
  Serial.println(mm);
  delay(100);
}
