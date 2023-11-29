void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(16, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, 1);
  digitalWrite(13, LOW);
  digitalWrite(14, HIGH);
  digitalWrite(15, HIGH);
  digitalWrite(16, HIGH);
  delay(1000);
  digitalWrite(2, 0);
  digitalWrite(13, HIGH);
  digitalWrite(14, LOW);
  digitalWrite(15, LOW);
  digitalWrite(16, LOW);
  delay(1000);
}
