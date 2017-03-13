const byte ledPin = 13;

void setup() 
{
Serial.begin(9600);
Serial.println("Hello,World");
Serial.print("\tLED Pin is: ");
Serial.print(ledPin);
Serial.print("\n");
pinMode(ledPin,OUTPUT);
}

int val;
void loop() 
{
if( Serial.available() )
{
  val=Serial.read();
  switch(val)
  {
    case'0':
    digitalWrite(ledPin,LOW);
     Serial.println("LED OFF");
     break;
     case'1':
      digitalWrite(ledPin,HIGH);
     Serial.println("LED ON");
     break;
  }
}
}
