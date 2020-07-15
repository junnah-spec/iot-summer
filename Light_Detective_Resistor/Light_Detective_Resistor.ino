
int ldr_pin = A0;
int analogValue = 0;

void setup() {

  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {

  analogValue = analogRead(ldr_pin);
  Serial.println(analogValue);
  delay(50);
  
  

 // put your main code here, to run repeatedly:

}
