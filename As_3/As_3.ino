void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  int d_time = 250;
  digitalWrite(14, 0);
  delay(d_time);
  digitalWrite(14, 1);
  delay(d_time);
  digitalWrite(15, 0);
  delay(d_time);
  digitalWrite(15, 1);
  delay(d_time);
  digitalWrite(16, 0);
  delay(d_time);
  digitalWrite(16, 1);
  delay(d_time);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, 1);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(2, 0);
  digitalWrite(13, HIGH);
  delay(1000);
}
