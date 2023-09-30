#define sensor_analog A0
#define sensor_digital 2
int deger1;
int deger2;
void setup() {
  Serial.begin(9600);
  pinMode(sensor_digital,INPUT);

}

void loop() {
  deger1=analogRead(sensor_analog);
  deger2=digitalRead(sensor_digital);
  Serial.print("Analog Deger:");
  Serial.print(deger1);
  Serial.print("\t");
  Serial.print("Digital Deger:");
  Serial.println(deger2);

}