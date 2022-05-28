const int ledPin = 6; // The pin of your LED
const int trigPin = 10; // The pin to which the TRIG is connected
const int echoPin = 11; // The pin to which the ECHO is connected
const int ledOnTime = 1000; // The time that the LED stays on, after detecting the motion (in milliseconds, 1000ms = 1s)
int duration;
int cm;
 
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
 
void loop() {
  digitalWrite(trigPin, HIGH);
  delay(100);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  cm = (duration/2) / 29.1; 

  if (cm > 30 && cm <60){ 
                          
    digitalWrite(ledPin, HIGH);
    delay (500);
    digitalWrite(ledPin, LOW);
      }
  
  if (cm >15 && cm <= 30) {            
     
    digitalWrite(ledPin, HIGH);
    delay (250);
    digitalWrite(ledPin, LOW);
      }
  
  if (cm <= 15){                   
        
    digitalWrite(ledPin,HIGH);
    delay (100);
      }
  delay(100);
}
