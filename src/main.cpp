#include <Arduino.h>
//#include "timeR.h"
#include "class_timer.h"
#include "led_task.h"
TIMER contador;
void encendido()
{
   digitalWrite(LED_BUILTIN,HIGH);
  if(digitalRead(LED_BUILTIN)==HIGH)
  {
    digitalWrite(LED_BUILTIN,LOW);
  }else{
    digitalWrite(LED_BUILTIN,HIGH);
  }
}
//ledbuiltin pin 2
void setup() {
  // put your setup code here, to run once:
  //int result = myFunction(2, 3);
  //micros();lo mismo que milli pero en microseg,32bits->2^32->49.7dias aprxo
  /*clase 1
  Serial.begin(9600);
  Serial.println("hollll");
  tick=millis();//tiempo desde que se inicia el micro*/
  //clase 2
  datos::ini(2,250);
  pinMode(LED_BUILTIN,OUTPUT);
  contador.reset();
 
  //Reset();
  //cont=(uint32_t)(~millis())+1UL; //el tamño del 1 depende del dispositivo que se use, por eso se usa 1UL para aclarar que es unsigned long
 //tambien podria usar (uint32_t)1
}
void loop() {
  // put your main code here, to run repeatedly:
  /* classe 1
  uint32_t tock=millis();
  if((tock-tick)>100)
  {
    Serial.println("paso 100ms");
  }
  */
  /*if(contador.dt()>250)
  {
    contador.reset();
    encendido();
  }*/
  datos::task();
}