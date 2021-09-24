void setup() {
  // put your setup code here, to run once:
  // When execution reaches delay the esecution will stop depending on the time you selected
 // delay(1000);
 //delayMicroseconds();
Serial.begin(9600);

 unsigned long timeBegin = millis();
 delay(500);
 unsigned long timeEnd = millis();

 unsigned long dur = timeEnd - timeBegin;
 Serial.print("The duration is: ");
 Serial.println(dur);
  

  
}

void loop() {
  // put your main code here, to run repeatedly:

}
