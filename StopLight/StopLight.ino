// C++ code
//
#define POT A5
int red = 10;
int yellow = 11;
int green = 12;
int ans;

void stopLight(int hold ) {
  
  digitalWrite(green, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);
  delay(hold);

  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(red, LOW);
    delay(hold);

  digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
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
}

void loop(){
    stopLight(1000);
}
 
  
