int defaultSpeed = 0;
int led = 4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

   pinMode(led, OUTPUT);
   digitalWrite(led, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() ) {
       if(Serial.parseInt() >= 100 && Serial.parseInt() <= 1000) {
           digitalWrite(led, LOW);
           delay(Serial.parseInt());
           Serial.println(Serial.parseInt());
           digitalWrite(led, HIGH);
       }
    }
  }
