int susensor =A5 ;
int cikis_degeri ;
void setup () {
  Serial.begin (9600);} //Serial haberleşme etkinleştirdik.
void loop() {
  int deger = analogRead(susensor); //Su seviyesi sensöründen gelen verileri değer değişkenine tanımladık.
  
  
  Serial.print("Su sensörü değeri: "); // Serial ekrana su sensörü değeri yazısını yazdırdık.
  Serial.println(deger); //Değer değişkeninin ekrana yazdırdık.
  delay(100); //Bu işlemleri 10 milisaniyede bir yaptırıyoruz. 
}
