void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  int d_time = 250;
  int LEDindex[] = {2,3,4,5};
  int i=0;
  for (i=0;i<4;i++){
    Serial.println(i);
    digitalWrite(LEDindex[i], HIGH);
    delay(d_time);
    digitalWrite(LEDindex[i], LOW);
    delay(d_time);
  }
  for (i=2;i<0;i--){
    Serial.println(i);
    digitalWrite(LEDindex[i], HIGH);
    delay(d_time);
    digitalWrite(LEDindex[i], LOW);
    delay(d_time);
  }
}
