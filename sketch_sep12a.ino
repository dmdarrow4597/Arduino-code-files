void setup() 
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);// put your setup code here, to run once:
}
void loop() 
{
 digitalWrite(13,HIGH);
 delay(10000);
 digitalWrite(13,LOW);
 delay(20000);// put your main code here, to run repeatedly:
}
