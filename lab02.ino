void setup() {
Serial.begin(9600);

}

void loop() {
int i;
float Analogin,Vin;
for(i=1;i<=5;i++)
Analogin=Analogin*0.7 + analogRead(A0)*0.3;
Vin=Analogin*5/1024;
Serial.println(Vin);
delay(500);
}
