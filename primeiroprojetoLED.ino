/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;
int led8 = 9;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  
  efeito11();
  efeito8();
  efeito7();
  delay(2000);
  efeito9();
  efeito9();
  delay(500);
  efeito2();
  efeito3();
  efeito5();
  efeito10();
  efeito12();
  efeito10();
  efeito12();
  delay(500);
  efeito14();
  efeito15();
  efeito1();
  efeito16();
  efeito17();
  delay(500);
  efeito18();
  efeito17();
  efeito16();
  efeito17();
  efeito19();
  delay(5000);
  
}


void efeito1(){
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  delay(1000);                      
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);     
  delay(1000);            
           
}

void efeito2(){
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, LOW);
  delay(1000);                      
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);     
  delay(1000);  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  delay(1000);                    
}

void efeito3(){
  int i =0;
  for( i = 9; i> 0; i--){
  digitalWrite(i, HIGH);
  delay(200);  
  digitalWrite(i, LOW);
  digitalWrite((i-1), HIGH);

  }
  
  efeito2();
  
  for( i = 0; i< 9; i++){
  digitalWrite(i, HIGH);
  delay(200);  
  digitalWrite(i, LOW);
  digitalWrite((i+1), HIGH);

  if(i == 8){
    digitalWrite(9,HIGH);
    delay(200);
    digitalWrite(9,LOW);
    }
  }

  
}

void efeito4(){
  int i =0;
  for( i = 9; i> 0; i--){
  digitalWrite(i, HIGH);
  delay(200);  
  digitalWrite(i, LOW);
  digitalWrite((i-1), HIGH);

  }

  for( i = 0; i< 9; i++){
  if (i != 0 && i != 1){
    digitalWrite(i, HIGH);
  delay(200);  
  digitalWrite(i, LOW);
  digitalWrite((i+1), HIGH);
  }

  if(i == 8){
    digitalWrite(9,HIGH);
    delay(200);
    digitalWrite(9,LOW);
    }
  }
  
}

void efeito5(){
  digitalWrite(led8, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led1,HIGH);
  digitalWrite(led2, HIGH);
  
  delay(1500);
  
  digitalWrite(led8, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);

  delay(1500);

  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led2, HIGH);

  delay(1500);

  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led2, LOW);

  delay(1500);
}

void efeito6(){
  int i =0;
  for( i = 0; i< 9; i++){
  digitalWrite(i, HIGH);
  delay(1000);  
  digitalWrite(i, LOW);
  digitalWrite((i+1), HIGH);

  if(i == 8){
    digitalWrite(9,HIGH);
    delay(1000);
    digitalWrite(9,LOW);
    }
  }

  efeito2(); 
  
  for( i = 9; i> 0; i--){
  digitalWrite(i, HIGH);
  delay(1000);  
  digitalWrite(i, LOW);
  digitalWrite((i-1), HIGH);

  }
  
}

void efeito7(){
  int tempo = 50;
  int vezes = 0;
  for (vezes = 0; vezes < 10; vezes++){
     if (vezes == 9){
    tempo = 800;
  }
   else if( vezes  == 8){
    tempo = 700;
  }
   else if( vezes  == 7){
    tempo = 600;
  }
   else if( vezes  == 6){
    tempo = 500;
  }
  else if( vezes  == 5){
    tempo = 400;
  }
  else if (vezes == 4){
    tempo = 300;
  }
  else if (vezes == 3){
    tempo = 200;
  }
  else if (vezes == 2){
    tempo = 100;
  }
  else if (vezes == 1){
    tempo = 50;
  }
  //----------------------------------------
  if (vezes == 9){
  digitalWrite(led1, HIGH);
  digitalWrite(led8, HIGH);
  delay(tempo);
  digitalWrite(led1, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led7, HIGH);
  delay(tempo);
  digitalWrite(led2, LOW);
  digitalWrite(led7, LOW);
  }
else{
  digitalWrite(led1, HIGH);
  digitalWrite(led8, HIGH);
  delay(tempo);
  digitalWrite(led1, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led7, HIGH);
  delay(tempo);
  digitalWrite(led2, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led6, HIGH);
  delay(tempo);
  digitalWrite(led3, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  delay(tempo);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
}
  
  }
}

void efeito8(){
  int tempo = 300;
  int vezes = 0;
  for(vezes = 0; vezes < 7; vezes++){
    int i =0;
    
  if (vezes == 1){
    tempo = 250;
  }
  else if( vezes  == 2){
    tempo = 200;
  }
  else if (vezes == 3){
    tempo = 100;
  }
  else if (vezes == 4){
    tempo = 50;
  }
  
  //----------------------------------------
  for( i = 9; i> 0; i--){
  digitalWrite(i, HIGH);
  delay(tempo);  
  digitalWrite(i, LOW);
  digitalWrite((i-1), HIGH);

  }
  //----------------------------------------------
  
  //----------------------------------------
  for( i = 0; i< 9; i++){
  if (i != 0 && i != 1){
    digitalWrite(i, HIGH);
  delay(tempo);  
  digitalWrite(i, LOW);
  digitalWrite((i+1), HIGH);
  }
   }
  }
}

void efeito9(){
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  delay(150);                      
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);     
  delay(150);            
           
}

void efeito10(){
  
  int i =0;
  int tempo = 50;
  for( i = 0; i< 9; i++){
  digitalWrite(i, HIGH);
  delay(tempo);  
  digitalWrite(i, LOW);
  digitalWrite((i+1), HIGH);
  }

  for( i = 0; i< 8; i++){
  digitalWrite(i, HIGH);
  delay(tempo);  
  digitalWrite(i, LOW);
  digitalWrite((i+1), HIGH);
  }

  for( i = 0; i< 7; i++){
  digitalWrite(i, HIGH);
  delay(tempo);  
  digitalWrite(i, LOW);
  digitalWrite((i+1), HIGH);
  }

  for( i = 0; i< 6; i++){
  digitalWrite(i, HIGH);
  delay(tempo);  
  digitalWrite(i, LOW);
  digitalWrite((i+1), HIGH);
  }

  for( i = 0; i< 5; i++){
  digitalWrite(i, HIGH);
  delay(tempo);  
  digitalWrite(i, LOW);
  digitalWrite((i+1), HIGH);
  }

  for( i = 0; i< 4; i++){
  digitalWrite(i, HIGH);
  delay(tempo);  
  digitalWrite(i, LOW);
  digitalWrite((i+1), HIGH);
  }

  for( i = 0; i< 3; i++){
  digitalWrite(i, HIGH);
  delay(tempo);  
  digitalWrite(i, LOW);
  digitalWrite((i+1), HIGH);
  }

  for( i = 0; i< 2; i++){
  digitalWrite(i, HIGH);
  delay(tempo);  
  digitalWrite(i, LOW);
  digitalWrite((i+1), HIGH);
  }
  
  for( i = 0; i< 10; i++){
  digitalWrite(i, LOW);
  delay(tempo);  
  
  }
  
}


void efeito11(){
  int i = 1;
  int tempo = 1000;
  for(i = 0; i< 10; i++){
    digitalWrite(i,HIGH);
    delay(tempo);
  }

  delay(2000);

  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  delay(tempo);
  digitalWrite(led3, LOW);
  digitalWrite(led6, LOW);
  delay(tempo);
  digitalWrite(led2, LOW);
  digitalWrite(led7, LOW);
  delay(tempo);
  digitalWrite(led1, LOW);
  digitalWrite(led8, LOW);
  delay(tempo);
}


void efeito12(){
   int i =0;
  int tempo = 50;
  for( i = 10; i > 0; i--){
  digitalWrite(i, HIGH);
  delay(tempo);  
  digitalWrite(i, LOW);
  digitalWrite((i-1), HIGH);
  }

   for( i = 10; i > 0; i--){
  digitalWrite(i, HIGH);
  delay(tempo);  
  digitalWrite(i, LOW);
  digitalWrite((i-1), HIGH);
  }

   for( i = 10; i > 0; i--){
  digitalWrite(i, HIGH);
  delay(tempo);  
  digitalWrite(i, LOW);
  digitalWrite((i-1), HIGH);
  }
}
void efeito13(){
  int i = 1;
  int tempo = 1000;
  for(i = 0; i< 10; i++){
    digitalWrite(i,HIGH);
    delay(tempo);
  }
  delay(2000);
  for(i = 0; i< 10; i++){
    digitalWrite(i,LOW);
    delay(tempo);
  }
  
}


void efeito14(){
  int i = 0;
  int tempo = 300;

  digitalWrite(led1, HIGH);
  digitalWrite(led8, HIGH);
  delay(tempo);
  digitalWrite(led1, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led7, HIGH);
  delay(tempo);
  digitalWrite(led2, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led6, HIGH);
  delay(tempo);
  digitalWrite(led3, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  delay(tempo);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  delay(tempo);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  digitalWrite(led3, HIGH);
  delay(tempo);
  digitalWrite(led6, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led7, HIGH);
  digitalWrite(led2, HIGH);
  delay(tempo);
  digitalWrite(led7, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led1, HIGH);
  digitalWrite(led8, HIGH);

  for( i = 10; i > 0; i--){
  digitalWrite(i, HIGH);
  delay(tempo);  
  digitalWrite(i, LOW);
  digitalWrite((i-1), HIGH);
  }
}

void efeito15(){
  int i = 0;
  int tempo = 300;

  digitalWrite(led1, HIGH);
  digitalWrite(led8, HIGH);
  delay(tempo);
  digitalWrite(led1, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led7, HIGH);
  delay(tempo);
  digitalWrite(led2, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led6, HIGH);
  delay(tempo);
  digitalWrite(led3, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  delay(tempo);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  delay(tempo);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  digitalWrite(led3, HIGH);
  delay(tempo);
  digitalWrite(led6, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led7, HIGH);
  digitalWrite(led2, HIGH);
  delay(tempo);
  digitalWrite(led7, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led1, HIGH);
  digitalWrite(led8, HIGH);

  for( i = 0; i < 10; i++){
  digitalWrite(i, HIGH);
  delay(tempo);  
  digitalWrite(i, LOW);
  digitalWrite((i+1), HIGH);
  }
}

void efeito16(){
  int i =0;
  int tempo = 500;
  
  for( i = 0; i < 10; i++){
  digitalWrite(i, HIGH);
  delay(tempo);  
  digitalWrite(i, LOW);
  digitalWrite((i-1), HIGH);
  }
}

void efeito17(){
  int tempo = 300;

  digitalWrite(led1, HIGH);
  digitalWrite(led8, HIGH);
  delay(tempo);
  digitalWrite(led1, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led7, HIGH);
  delay(tempo);
  digitalWrite(led2, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led6, HIGH);
  delay(tempo);
  digitalWrite(led3, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  delay(tempo);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  delay(tempo);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  digitalWrite(led3, HIGH);
  delay(tempo);
  digitalWrite(led6, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led7, HIGH);
  digitalWrite(led2, HIGH);
  delay(tempo);
  digitalWrite(led7, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led1, HIGH);
  digitalWrite(led8, HIGH);
}

void efeito18(){
  int i =0;
  int tempo = 500;
  
  for( i = 10; i > 0; i--){
  digitalWrite(i, HIGH);
  delay(tempo);  
  digitalWrite(i, LOW);
  digitalWrite((i+1), HIGH);
  }
}

void efeito19(){
  int i = 1;
  int tempo = 2000;
  for(i = 10; i> 0; i--){
    digitalWrite(i,HIGH);
    delay(tempo);
  }
  delay(100);
   for(i = 10; i> 0; i--){
    digitalWrite(i,LOW);
    delay(tempo);
   }
}
