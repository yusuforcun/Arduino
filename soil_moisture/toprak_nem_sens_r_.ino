int sensor_pin = A0;
 
int sensor_pin1 = A1 ;

int cikis_degeri ;
int cikis_degeri1 ;
 
void setup() {
 
Serial.begin(9600);
 
Serial.println("Sensörden veri okunuyor ...");
 
delay(2000);
 
}
 
void loop() {
 
cikis_degeri= analogRead(sensor_pin);
cikis_degeri1= analogRead(sensor_pin1);
cikis_degeri1 = map(cikis_degeri1,550,0,0,100);

Serial.print(cikis_degeri);
Serial.print("birinci : ");
Serial.print(cikis_degeri1);
Serial.println("%");
delay(1000);
}
