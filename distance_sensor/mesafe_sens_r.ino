#define echoPin 6
#define trigPin 7
#define buzzerPin 8
#define kırmızı 4
#define sarı 3
#define yeşil 2



int maximumRange = 50;
int minimumRange = 0;



void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);

}

void loop() {

  int olcum = mesafe(maximumRange, minimumRange);
  melodi(olcum*10);

}

int mesafe(int maxrange, int minrange)
{
  long duration, distance;

  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration / 58.2;
  delay(50);

  if(distance >= maxrange || distance <= minrange)
  return 0;
  return distance;
}

int melodi(int dly)
{
  tone(buzzerPin, 440);
  delay(dly);
  noTone(buzzerPin);
  delay(dly);
}
else if distance>200 ;
{
  digitalWrite(10, HIGH);   
  delay(1000);                       
  digitalWrite(10, LOW);    
  delay(1000);
}
else  50>distance>100 ;
{  
  digitalWrite(11 , HIGH);   
  delay(1000);                       
  digitalWrite(11, LOW);    
  delay(1000);  
}
else  25>distance>50 ;
{
  digitalWrite(9, HIGH);   
  delay(1000);                       
  digitalWrite(9, LOW);    
  delay(1000);  
}  
else  distance<25 ;
{
  digitalWrite(9, HIGH);   
  delay(1000);                       
  digitalWrite(9, LOW);    
  delay(1000);
  digitalWrite(11, HIGH);   
  delay(1000);                       
  digitalWrite(11, LOW);   
  delay(1000);  
  digitalWrite(10, HIGH);    
  delay(1000);                    
  digitalWrite(10, LOW);    
  delay(1000);
      
}
