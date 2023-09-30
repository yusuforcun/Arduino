const byte potPin=A0;
int potdeger;
 
void setup() {
Serial.begin(9600);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
}
 
void loop() {
potdeger=analogRead(potPin);
Serial.print("Potansiyometre Okunan Deger= ");
Serial.println(potdeger);

if(potdeger==0){
  digitalWrite(9,0);
  digitalWrite(10,0);
  digitalWrite(8,0);
  digitalWrite(11,0);
}else if (potdeger <= 75 && potdeger != 0 ){
  digitalWrite(8,1);
  digitalWrite(9,0);
  digitalWrite(10,0);
  digitalWrite(11,0);
}else if (potdeger <= 170  ){
  digitalWrite(8,1);
  digitalWrite(9,1);
  digitalWrite(10,0);
  digitalWrite(11,0);
}else if (potdeger <= 270){
  digitalWrite(8,1);
  digitalWrite(9,1);
  digitalWrite(10,1);
  digitalWrite(11,0);
}else if (potdeger >= 360 ){
  digitalWrite(8,1);
  digitalWrite(9,1);
  digitalWrite(10,1);
  digitalWrite(11,1);
} 
}
