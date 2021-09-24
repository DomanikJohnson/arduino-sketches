void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // Wait for data and changes the timeout that Serial has: by default its 1 second
  Serial.setTimeout(10);


}

void loop() {
  // put your main code here, to run repeatedly:

  // give a number and number of bytes ready to be read
  if(Serial.available() > 0) {
     String var = Serial.readString();
     //Serial.readString()
     //Serial.parseFloat();
     // There is a serial timeout when you pass those it will try to read an interpit the data and will wait 1 second to wait for data
     Serial.println(var);
    
  }


}
