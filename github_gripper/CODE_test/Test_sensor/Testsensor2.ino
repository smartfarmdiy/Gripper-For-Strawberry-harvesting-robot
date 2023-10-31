int FSR;

void setup() {
  Serial.begin(9600);

}

void loop() {
  FSR = 1023 - analogRead(A0);
  Serial.print("Force Value = ");
  Serial.println(FSR);
  delay(1000);
  
}
