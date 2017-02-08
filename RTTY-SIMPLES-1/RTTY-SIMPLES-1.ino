#include <stdio.h>
 
#define AFSK_OUT 4   //---- AFSK AUDIO OUTPUT
#define FSK_OUT  10   //---- TTL LEVEL OUTPUT para radio colocar 13 Para placa de som deixar 10
#define PTT      11                      // PTT pin OUTPUT para radio colocar 12 Para placa de som deixar 11



#define MARK     2295
#define SPACE    2125
 
#define PTTlead  500                     // PTT lead delay ms
#define PTTtail  100                     // PTT tail delay ms

 
boolean d1;
boolean d2;
boolean d3;
boolean d4;
boolean d5;

 
void setup()
{
 	pinMode(PTT,  OUTPUT);
	pinMode(FSK_OUT,  OUTPUT);
        pinMode(AFSK_OUT, OUTPUT);
        digitalWrite(FSK_OUT, HIGH);
        tone(AFSK_OUT, MARK);
        delay(700);
        Serial.begin(9600);

}
 
void sendFsk()
{
 

 Serial.print(d1);Serial.print(d2);Serial.print(d3);Serial.print(d4);Serial.print(d5);Serial.print(' ');

        digitalWrite(FSK_OUT, LOW);
        tone(AFSK_OUT, SPACE);
        delay(22);
        //--bit1
        if(d1 == 1){
                digitalWrite(FSK_OUT, HIGH);
                tone(AFSK_OUT, MARK);
        }
        else{
                digitalWrite(FSK_OUT, LOW);
                tone(AFSK_OUT, SPACE);
        }
        delay(22);
        //--bit2
        if(d2 == 1){
                digitalWrite(FSK_OUT, HIGH);
                tone(AFSK_OUT, MARK);
        }
        else{
                digitalWrite(FSK_OUT, LOW);
                tone(AFSK_OUT, SPACE);
        }
        delay(22);
        //--bit3
        if(d3 == 1){
                digitalWrite(FSK_OUT, HIGH);
                tone(AFSK_OUT, MARK);
        }
        else{
                digitalWrite(FSK_OUT, LOW);
                tone(AFSK_OUT, SPACE);
        }
        delay(22);
        //--bit4
        if(d4 == 1){
                digitalWrite(FSK_OUT, HIGH);
                tone(AFSK_OUT, MARK);
        }
        else{
                digitalWrite(FSK_OUT, LOW);
                tone(AFSK_OUT, SPACE);
        }
        delay(22);
        //--bit5
        if(d5 == 1){
                digitalWrite(FSK_OUT, HIGH);
                tone(AFSK_OUT, MARK);
        }
        else{
                digitalWrite(FSK_OUT, LOW);
                tone(AFSK_OUT, SPACE);
        }
        delay(22);
        //--stop bit
        digitalWrite(FSK_OUT, HIGH);
        tone(AFSK_OUT, MARK);
        delay(33);
       
}
 

 
void loop()
{

digitalWrite(PTT, HIGH);          // PTT ON
delay(PTTlead);                   // PTT lead delay

//11011 (FIGS)
d1 = 1; d2 = 1; d3 = 0; d4 = 1; d5 = 1;


//11111 (letras)
//d1 = 1; d2 = 1; d3 = 1; d4 = 1; d5 = 1;
sendFsk();
//letra a
//11000
d1 = 1; d2 = 1; d3 = 0; d4 = 0; d5 = 0;
sendFsk();    
d1 = 1; d2 = 0; d3 = 0; d4 = 0; d5 = 0;
sendFsk();  

d1 = 1; d2 = 1; d3 = 1; d4 = 1; d5 = 1;
sendFsk();  
d1 = 1; d2 = 1; d3 = 0; d4 = 1; d5 = 0;
sendFsk();  

//00010
//d1 = 0; d2 = 0; d3 = 0; d4 = 1; d5 = 0; //CR
//endFsk();

//01000
//d1 = 0; d2 = 1; d3 = 0; d4 = 0; d5 = 0; //LF
//sendFsk();






        delay(PTTtail);
        digitalWrite(PTT, LOW);
	Serial.println();
        digitalWrite(FSK_OUT, LOW);
        noTone(AFSK_OUT);
        delay(10000);

}
