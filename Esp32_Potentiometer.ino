//Reading the potentiometer
const int potPin = 4;
//GPIO is input only

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

}

void loop() {
  int potValue = analogRead(potPin);
  Serial.print("Potentiometer Value: ");
  Serial.println(potValue);//Prints the value
  delay(200);//Delay for readability
  //analogWrite(ledPin, potValue);
  
}
