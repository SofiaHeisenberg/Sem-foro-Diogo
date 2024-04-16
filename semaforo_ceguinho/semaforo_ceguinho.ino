
void setup()
{
  

  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  Serial.println("vermelho");
  tone(3, 43, 5000);
  delay(4000); //espera so um poquinho(10s)
  
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  Serial.println("amarelo");
  tone(3, 15, 5000);
  delay(5000); // so espera 5 segundos
   
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  Serial.println("verde");
  tone(3, 10, 5000000);
  delay(5000);
  
}//BUTTERFLY MANTEIGA VOADORA MUSICA
