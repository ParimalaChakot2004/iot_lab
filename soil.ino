int sensor=0;
const int upper=1000;
const int lower=600;

void setup(){
  pinMode(A0,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}
void(loop)(){
  sensor=analogRead(A0);
  
  
  if(sensor>=upper){
      Serial.println(sensor);
      digitalWrite(13,HIGH);
  }
  else if (sensor<upper && sensor>lower){
      Serial.println(sensor);
  
  }
  else{
      Serial.println(sensor);
    digitalWrite(13,LOW);
  }
  delay(1000);

}

