#define boton 7
#define led 9
#define pote A0

void setup(){
Serial.begin (115200);
pinMode (pote, INPUT);
pinMode (boton, INPUT);
pinMode (led, OUTPUT);
}

void loop()
{
if (digitalRead (boton)){
  Serial.println ("Ya precionaste el boton, el led deveria encenderse");
  digitalWrite (led, 1);
  delay (2000);
  Serial.print ("el valor leido en bit es:");
  Serial.println (analogRead (pote));
  float tension = analogRead (pote)*5/1023.0;
  Serial.print ("El valor leido en tension es:");
  Serial.println (tension);
  delay (200);
  }
  else 
  digitalWrite (led, 0);

}
