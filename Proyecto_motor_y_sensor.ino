#define boton1 7
#define boton2 8
#define motor1 12
#define motor2 13

#define trig A0
#define echo A1

void setup(){
Serial.begin (9600);
pinMode (trig, OUTPUT); 
pinMode (echo, INPUT);

pinMode (motor1, OUTPUT);
pinMode (motor2, OUTPUT);

pinMode (boton1, INPUT_PULLUP);
pinMode (boton2, INPUT_PULLUP);


}

void loop(){
  digitalWrite (trig, 0);
  delayMicroseconds (20);
  digitalWrite (trig, 1);
  delayMicroseconds (10);
  digitalWrite (trig, 0);
  long duracion = pulseIn (echo, 1);
  float distancia = duracion *0.034/2;
  Serial.print ("Distancia: ");
  Serial.print (distancia);
  Serial.println (" Centimetros");
  delay (500);
  
if (digitalRead (boton1) == 0){
  digitalWrite (motor1, 1);
  digitalWrite (motor2, 0);
}
else if (digitalRead (boton2) == 0){
  digitalWrite (motor1, 0);
  digitalWrite (motor2, 1);
}
else {
  digitalWrite (motor1, 0);
  digitalWrite (motor2, 0);
}
}
