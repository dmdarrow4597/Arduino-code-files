void setup()
{
  pinMode(A4, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);// put your setup code here, to run once:
}
float val = 0,valu;
void loop()
{
  val = analogRead(A4);
  val=(val/80);
  Serial.println(val); // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(val);
  valu=12.8-val;
  digitalWrite(13, LOW);
  delay(valu);
}
