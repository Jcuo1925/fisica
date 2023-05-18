

void setup() {
  Serial.begin(115200);
  // put your setup code here, to run once:
  pinMode(26, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(26, LOW);
  delay(5000);
  digitalWrite(26, HIGH);
  delay(5000);
}
