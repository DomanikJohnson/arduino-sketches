#define btnPin

byte buttonState = LOW;
unsigned long lastTimeButtonChanged = millis();
unsigned long debounceDelay = 50;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(btnPint, INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long timeNow = millis();

  if(timeNow  - lastTimeButtonChanged > debounceDelay) {
      byte newButtonState = digitalRead(btnPin);
      if(newButtonState != buttonState) {
        lastTimeButtonChanged = timeNow;
        buttonState  = newButtonState:
        
      }
  }

  if (newButtonState != buttonState) {
      buttonState = newButtonState;
      if(buttonState == HIGH) {

       Serial.println("Button Pressed");
      }else {
        Serial.println("ButtonReleased");
        
      }
  }
}
