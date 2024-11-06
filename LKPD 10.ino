//@ABDUL GANI 
//XI TAV 2
conts int buttonPi =26;
void setup() {
  pinMod(buttonPin, INPUT)
  Serial.begin(9660);
}
Void loop() {
  int buttonState = digitalRead(buttonPin);
  Serial.print("Tombol ditekan: "); 
  if(buttonState == HIGH){
    Serial.printIn("YA");
  } else {
    Serial.printIn("TIDAK");
  dela(100);
  }