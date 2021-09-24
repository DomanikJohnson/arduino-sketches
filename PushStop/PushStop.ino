// C++ code
//
#define POT A5
int red = 10;
int yellow = 11;
int green = 12;
int push = 4;

void stopLight(int hold ) {
  
  digitalWrite(green, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);

  delay(hold);

  digitalWrite(yellow, HIGH);
  digitalWrite(red, HIGH);
  digitalWrite(green, LOW);
  
  delay(hold);
}

void setup()
{
  // Baud rate
  Serial.begin(9600);
  
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(push, INPUT);

  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
}

void loop(){
  if (digitalRead(push) == HIGH) {
      Serial.println("Helo");
    
  }else {
        stopLight(300); 
  }
}
 
