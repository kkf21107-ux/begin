int ledPin=13;
int startValue=5;
void flashLED(int times){
  int count =0;
while(count<times){
  digitalWrite(ledPin, HIGH);  // LED on
    delay(200);

    digitalWrite(ledPin, LOW);   // LED off
    delay(200);

    count++;
}
}
void setup(){
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);

  Serial.println("===Smart Countdown Starting===");
  
  int count=startValue;
  while(count>0){
    Serial.print("Count is: ");
    Serial.println(count);
    flashLED(count);
    delay(1000);
    count=count-1;
  }
Serial.println("===Countdown Complete===");
digitalWrite(ledPin,HIGH);
delay(5000);
digitalWrite(ledPin, LOW);
delay (1000);
}

void loop(){
  
}