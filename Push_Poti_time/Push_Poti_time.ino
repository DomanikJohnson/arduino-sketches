// C++ code
//

int red = 12;
int push = 11;
int blue = 2;
int pot = A5;
int orange = 7;

unsigned long timeSince = 0;
unsigned long waitTime = 1000;

int a = HIGH; 

  void setup()
{
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(push, INPUT );
  pinMode(orange, OUTPUT);
  digitalWrite(orange, a);
  
  
}

void loop()
{
  unsigned long time = millis();
    
    if(time - timeSince > waitTime) {
      
      if( a == HIGH) {
           a = LOW;
           digitalWrite(orange, a);
      }else {
            a = HIGH;
           digitalWrite(orange, a);

      }
      
      timeSince = time;
      Serial.println(timeSince);
    }
  if(digitalRead(push) == HIGH){
   digitalWrite(red, HIGH);
  } else {
    
  digitalWrite(red, LOW);

  }
  int read = analogRead(pot);

  analogWrite(blue, read/4) ; 
}
