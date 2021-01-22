       /*    Dedicated for JRC    *****NEAMATULLAH***** */

#include <IRremote.h>

int RECV_PIN = A5;
IRrecv irrecv(RECV_PIN);
decode_results results;

int state1=1;
int state2=1;
int state3=1;
int state4=1;
int state5=1;
int state6=1;
int state7=1;
int state8=1;
int state9=1;
int state10=1;
int state11=1;

int led1=2;
int led2=3;
int led3=4;
int led4=5;
int led5=6;
int led6=7;
int led7=8;
int led8=9;
int led9=10;
int led10=11;
int led11=12;


void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);  
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);  
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
  pinMode(led9,OUTPUT);  
  pinMode(led10,OUTPUT);
  pinMode(led11,OUTPUT);

}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);    
    irrecv.resume();
  
    
    if(results.value == 0xbuttonvalue)
    {
     digitalWrite(led1,state1);
     state1 = !state1; 
    }
    if(results.value == 0xbuttonvalue)
    {
     digitalWrite(led2,state2);
     state2 = !state2; 
    }
    if(results.value == 0xbuttonvalue)
    {
     digitalWrite(led3,state3);
     state3 = !state3; 
    }
     if(results.value == 0xbuttonvalue)
    {
     digitalWrite(led4,state4);
     state4 = !state4; 
    }
    if(results.value == 0xbuttonvalue)
    {
     digitalWrite(led5,state5);
     state5 = !state5; 
    }
    if(results.value == 0xbuttonvalue)
    {
     digitalWrite(led6,state6);
     state6 = !state6; 
    }
     if(results.value == 0xbuttonvalue)
    {
     digitalWrite(led7,state7);
     state7 = !state7; 
    }
    if(results.value == 0xbuttonvalue)
    {
     digitalWrite(led8,state8);
     state8 = !state8; 
    }
    if(results.value == 0xbuttonvalue)
    {
     digitalWrite(led9,state9);
     state9 = !state9; 
    }
     if(results.value == 0xbuttonvalue)
    {
     digitalWrite(led10,state10);
     state10 = !state10; 
    }
    if(results.value == 0xbuttonvalue)
    {
     digitalWrite(led11,state11);
     state11 = !state11; 
    }
    
  }   
  

}


/*
THANKS FOR USE THIS
IF YOU FACE ANY PROBLEM 
CONTACT ME ON FACEBOOK
WWW.FACEBOOK.COM/neamatullah.masud.5
*/
