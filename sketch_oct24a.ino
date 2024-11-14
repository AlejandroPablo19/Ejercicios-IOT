int trig =10;
int eco= 9;
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int duracion;
int distancia;

void setup(){
  
  pinMode(trig, OUTPUT);
  pinMode(eco, INPUT);
  pinMode(led1, OUTPUT);
  Serial.begin (9600); 
  }

  void loop(){
    
    digitalWrite(trig, HIGH);
    delay(1);
    digitalWrite(trig, LOW);
   
    duracion = pulseIn(eco, HIGH);
    distancia = duracion/58.2;
    Serial.print(distancia);
    Serial.print(" Centimetros");
    Serial.println();

    delay(200);


    if (distancia <= 30){
      digitalWrite(led1, HIGH);
      delay(100);
      
      }
       if (distancia <= 25){
      digitalWrite(led2, HIGH);
      delay(100);
      
      }
       if (distancia <= 20){
      digitalWrite(led3, HIGH);
      delay(100);
      
      }
       if (distancia <= 15){
      digitalWrite(led4, HIGH);
      delay(100);
      
      }
       if (distancia <= 10){
      digitalWrite(led5, HIGH);
      delay(100);
      
      }
     
      else{
        digitalWrite(led1,LOW);
        digitalWrite(led2,LOW);
        digitalWrite(led3,LOW);
        digitalWrite(led4,LOW);
        digitalWrite(led5,LOW);
        delay(100);
        
        }
        
      
 }
