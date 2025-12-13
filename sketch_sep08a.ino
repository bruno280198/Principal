#define in1 12
#define in2 13

#define boton_in1 7
#define boton_in2 8

#define trig 9
#define echo 10
void setup(){
Serial.begin (9600);
pinMode (trig, OUTPUT); 
pinMode (echo, INPUT);

pinMode (in1, OUTPUT);
pinMode (in2, OUTPUT);

pinMode (boton_in1, INPUT_PULLUP);
pinMode (boton_in2, INPUT_PULLUP);


}

void loop(){
  digitalWrite (trig, LOW);
  delayMicroseconds (20);
  digitalWrite (trig, HIGH);
  delayMicroseconds (10);
  digitalWrite (trig, LOW);
  long duracion = pulseIn (echo, HIGH);
  float distancia = duracion *0.034/2;
  Serial.print ("Distancia: ");
  Serial.print (distancia);
  Serial.println (" Centimetros");
  delay (500);
  
if (digitalRead (boton_in1) == 1){
  digitalWrite (in1, 1);
  digitalWrite (in2, 0);
}
if (digitalRead (boton_in2) == 1){
  digitalWrite (in1, 0);
  digitalWrite (in2, 1);
}
}
