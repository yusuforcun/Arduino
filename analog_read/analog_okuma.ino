

int deger=0;

void setup() {
    pinMode(8 , OUTPUT);
    pinMode(9 , OUTPUT);
    pinMode(10 , OUTPUT);
    pinMode(11 , OUTPUT);
    pinMode(12 , OUTPUT);
    Serial.begin(9600);
    Serial.println("Pot değeri :");
}

void loop() {
    deger=analogRead(A0);
    Serial.println(deger);
    
   if (0<=deger<204)
    {
       digitalWrite(8,HIGH);
       digitalWrite(9,LOW);
       digitalWrite(10,LOW);
       digitalWrite(11,LOW);
       digitalWrite(12,LOW);
     }
   if ( 204<=deger<408)
    {
       digitalWrite(8,LOW);
       digitalWrite(9,HIGH);
       digitalWrite(10,LOW);
       digitalWrite(11,LOW);
       digitalWrite(12,LOW);
     }
   if( 408<=deger<612)
     {
       digitalWrite(8,LOW);
       digitalWrite(9,LOW);
       digitalWrite(10,HIGH);
       digitalWrite(11,LOW);
       digitalWrite(12,LOW);
      
      }
   if (612<=deger<816)
     {
       digitalWrite(8,LOW);
       digitalWrite(9,LOW);
       digitalWrite(10,LOW);
       digitalWrite(11,HIGH);
       digitalWrite(12,LOW);
      }
   if  (  816<=deger<=1024 )
     {
       digitalWrite(8,HIGH);
       digitalWrite(9,LOW);
       digitalWrite(10,LOW);
       digitalWrite(11,LOW);
       digitalWrite(12,HIGH);
      }
    
   }
