const int sensorPin = A0;    // Sensörün A0 pini A0'ye bağlı
const int digitalPin = 2;    // Sensörün DO pini Dijital Pin 2'ye bağlı

void setup() {
  Serial.begin(9600);       // Seri iletişim başlatılıyor
  pinMode(digitalPin, INPUT);  // Digital pin giriş olarak ayarlanıyor
}

void loop() {
  int sensorValue = analogRead(sensorPin);    // Sensör değeri okunuyor
  int digitalValue = digitalRead(digitalPin);  // DO pini okunuyor

  Serial.print("Analog Değer: ");
  Serial.println(sensorValue);
  
  Serial.print("Dijital Değer: ");
  Serial.println(digitalValue);
  
  delay(1000);                                 // 1 saniye bekleme
}
