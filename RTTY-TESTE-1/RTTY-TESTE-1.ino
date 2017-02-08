/*Arduino RTTY WFP*/

int led = 13;
int i;
String stringOne;
int tamanho;
boolean d1;
boolean d2;
boolean d3;
boolean d4;
boolean d5;
boolean fig1;
boolean fig2;
String caracter;


void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}


void sendFsk()
{
     Serial.print(d1);Serial.print(d2);Serial.print(d3);Serial.print(d4);Serial.print(d5);Serial.println(' ');
}


void converteITA2(String letra)
{
       
        if(letra == String(' ')){d1 = 0; d2 = 0; d3 = 1; d4 = 0; d5 = 0;}
        else if(letra == String('A')){d1 = 1; d2 = 1; d3 = 0; d4 = 0; d5 = 0; fig2 = 0;}
        else if(letra == String('B')){d1 = 1; d2 = 0; d3 = 0; d4 = 1; d5 = 1; fig2 = 0;}
        else if(letra == String('C')){d1 = 0; d2 = 1; d3 = 1; d4 = 1; d5 = 0; fig2 = 0;}
        else if(letra == String('D')){d1 = 1; d2 = 0; d3 = 0; d4 = 1; d5 = 0; fig2 = 0;}
        else if(letra == String('E')){d1 = 1; d2 = 0; d3 = 0; d4 = 0; d5 = 0; fig2 = 0;}
        else if(letra == String('F')){d1 = 1; d2 = 0; d3 = 1; d4 = 1; d5 = 0; fig2 = 0;}
        else if(letra == String('G')){d1 = 0; d2 = 1; d3 = 0; d4 = 1; d5 = 1; fig2 = 0;}
        else if(letra == String('H')){d1 = 0; d2 = 0; d3 = 1; d4 = 0; d5 = 1; fig2 = 0;}
        else if(letra == String('I')){d1 = 0; d2 = 1; d3 = 1; d4 = 0; d5 = 0; fig2 = 0;}
        else if(letra == String('J')){d1 = 1; d2 = 1; d3 = 0; d4 = 1; d5 = 0; fig2 = 0;}
        else if(letra == String('K')){d1 = 1; d2 = 1; d3 = 1; d4 = 1; d5 = 0; fig2 = 0;}
        else if(letra == String('L')){d1 = 0; d2 = 1; d3 = 0; d4 = 0; d5 = 1; fig2 = 0;}
        else if(letra == String('M')){d1 = 0; d2 = 0; d3 = 1; d4 = 1; d5 = 1; fig2 = 0;}
        else if(letra == String('N')){d1 = 0; d2 = 0; d3 = 1; d4 = 1; d5 = 0; fig2 = 0;}
        else if(letra == String('O')){d1 = 0; d2 = 0; d3 = 0; d4 = 1; d5 = 1; fig2 = 0;}
        else if(letra == String('P')){d1 = 0; d2 = 1; d3 = 1; d4 = 0; d5 = 1; fig2 = 0;}
        else if(letra == String('Q')){d1 = 1; d2 = 1; d3 = 1; d4 = 0; d5 = 1; fig2 = 0;}
        else if(letra == String('R')){d1 = 0; d2 = 1; d3 = 0; d4 = 1; d5 = 0; fig2 = 0;}
        else if(letra == String('S')){d1 = 1; d2 = 0; d3 = 1; d4 = 0; d5 = 0; fig2 = 0;}
        else if(letra == String('T')){d1 = 0; d2 = 0; d3 = 0; d4 = 0; d5 = 1; fig2 = 0;}
        else if(letra == String('U')){d1 = 1; d2 = 1; d3 = 1; d4 = 0; d5 = 0; fig2 = 0;}
        else if(letra == String('V')){d1 = 0; d2 = 1; d3 = 1; d4 = 1; d5 = 1; fig2 = 0;}
        else if(letra == String('W')){d1 = 1; d2 = 1; d3 = 0; d4 = 0; d5 = 1; fig2 = 0;}
        else if(letra == String('X')){d1 = 1; d2 = 0; d3 = 1; d4 = 1; d5 = 1; fig2 = 0;}
        else if(letra == String('Y')){d1 = 1; d2 = 0; d3 = 1; d4 = 0; d5 = 1; fig2 = 0;}
        else if(letra == String('Z')){d1 = 1; d2 = 0; d3 = 0; d4 = 0; d5 = 1; fig2 = 0;}
        else if(letra == String('0')){d1 = 0; d2 = 1; d3 = 1; d4 = 0; d5 = 1; fig2 = 1;}
        else if(letra == String('1')){d1 = 1; d2 = 1; d3 = 1; d4 = 0; d5 = 1; fig2 = 1;}
        else if(letra == String('2')){d1 = 1; d2 = 1; d3 = 0; d4 = 0; d5 = 1; fig2 = 1;}
        else if(letra == String('3')){d1 = 1; d2 = 0; d3 = 0; d4 = 0; d5 = 0; fig2 = 1;}
        else if(letra == String('4')){d1 = 0; d2 = 1; d3 = 0; d4 = 1; d5 = 0; fig2 = 1;}
        else if(letra == String('5')){d1 = 0; d2 = 0; d3 = 0; d4 = 0; d5 = 1; fig2 = 1;}
        else if(letra == String('6')){d1 = 1; d2 = 0; d3 = 1; d4 = 0; d5 = 1; fig2 = 1;}
        else if(letra == String('7')){d1 = 1; d2 = 1; d3 = 1; d4 = 0; d5 = 0; fig2 = 1;}
        else if(letra == String('8')){d1 = 0; d2 = 1; d3 = 1; d4 = 0; d5 = 0; fig2 = 1;}
        else if(letra == String('9')){d1 = 0; d2 = 0; d3 = 0; d4 = 1; d5 = 1; fig2 = 1;}
        else if(letra == String('-')){d1 = 1; d2 = 1; d3 = 0; d4 = 0; d5 = 0; fig2 = 1;}
        else if(letra == String('?')){d1 = 1; d2 = 0; d3 = 0; d4 = 1; d5 = 1; fig2 = 1;}
        else if(letra == String(':')){d1 = 0; d2 = 1; d3 = 1; d4 = 1; d5 = 0; fig2 = 1;}
        else if(letra == String('(')){d1 = 1; d2 = 1; d3 = 1; d4 = 1; d5 = 0; fig2 = 1;}
        else if(letra == String(')')){d1 = 0; d2 = 1; d3 = 0; d4 = 0; d5 = 1; fig2 = 1;}
        else if(letra == String('.')){d1 = 0; d2 = 0; d3 = 1; d4 = 1; d5 = 1; fig2 = 1;}
        else if(letra == String(',')){d1 = 0; d2 = 0; d3 = 1; d4 = 1; d5 = 0; fig2 = 1;}
        else if(letra == String('/')){d1 = 1; d2 = 0; d3 = 1; d4 = 1; d5 = 1; fig2 = 1;}
        else if(letra == String('+')){d1 = 1; d2 = 0; d3 = 0; d4 = 0; d5 = 1; fig2 = 1;} //ITA2
        else if(letra == String('\n')){d1 = 0; d2 = 1; d3 = 0; d4 = 0; d5 = 0;} //LF
        else if(letra == String('\r')){d1 = 0; d2 = 0; d3 = 0; d4 = 1; d5 = 0;} //CR
        else
        {
                letra = String(' ');
                d1 = 0; d2 = 0; d3 = 1; d4 = 0; d5 = 0;
         }
         
         
}






void loop() {  
  stringOne = String("A0:");
  stringOne += analogRead(A0);
  stringOne += String(" A1:");
  stringOne += analogRead(A1);
  
  tamanho = stringOne.length();

  Serial.println(stringOne);
  delay(1000);

  //Passa string letra a letra 
  for (i = 0; i < tamanho; i++){
    caracter = stringOne.substring(i, i+1);
    Serial.println(caracter);
   
    converteITA2(caracter);
    
    if(fig2 == 1){
            if (fig2 == fig1) {
              fig1=fig2;
            }
            else {
              d1 = 1; d2 = 1; d3 = 0; d4 = 1; d5 = 1; //FIGURES
              sendFsk();
              //Serial.print(d1);Serial.print(d2);Serial.print(d3);Serial.print(d4);Serial.print(d5);Serial.println(' ');
              fig1 = fig2;
            }
            
    }else if(fig2 == 0){
            //primeira vez passando no loop tem que enviar o letter pois por padrao fig1=0
            if (fig2 == fig1 && i==0) {
              d1 = 1; d2 = 1; d3 = 1; d4 = 1; d5 = 1; //LETTERS
              sendFsk();
              fig1=fig2;
            }
            
            else if (fig2 == fig1 && i>0) {
              fig1=fig2;
            }
            
            else {
            d1 = 1; d2 = 1; d3 = 1; d4 = 1; d5 = 1; //LETTERS
            sendFsk();
            //Serial.print(d1);Serial.print(d2);Serial.print(d3);Serial.print(d4);Serial.print(d5);Serial.println(' ');
            fig1 = fig2;
            }
    }
    
    
    converteITA2(caracter);
    //Serial.print(d1);Serial.print(d2);Serial.print(d3);Serial.print(d4);Serial.print(d5);Serial.println(' ');
   sendFsk();   
   
  }
    
         
     
    delay(2000);
}
 

