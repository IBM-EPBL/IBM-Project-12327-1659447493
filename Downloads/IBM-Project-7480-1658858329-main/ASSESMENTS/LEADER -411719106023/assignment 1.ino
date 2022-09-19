int fsrPin = 0;   
int fsrReading;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(6, INPUT);
  pinMode(5, INPUT);
  pinMode(7, OUTPUT);
  pinMode(8,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int button = digitalRead(6);
  int button1 = digitalRead(5);
  fsrReading = analogRead(fsrPin);
  Serial.println(fsrReading);
  if(fsrReading>0){
    Serial.println(fsrReading);
    digitalWrite(8,HIGH);
    delay(5000);
    digitalWrite(8,LOW);
  }
  if (button1==HIGH){
  digitalWrite(7,HIGH);
  delay(2000);
  }
  else{
    digitalWrite(7,LOW);}
  if(button == HIGH){
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(9, HIGH);
    delay(1000);}
  else{
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);}
  
}