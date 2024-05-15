#include "Automaton.h"

int esteira[4] = {10, 9, 8, 7};   // Pinos do motor da esteira
int prato[4] = {5, 4, 3, 2};      // Pinos do motor do prato
bool virtual_pins[8] = {false, false, false, false, false, false, false, false};

void step(int* motor, int passo)  // Função que realiza a sequência de acionamento dos motores
{
  switch (passo) {
    case 0:  // 1000
      digitalWrite(motor[0], HIGH);
      digitalWrite(motor[1], LOW);
      digitalWrite(motor[2], LOW);
      digitalWrite(motor[3], LOW);
      break;
    case 1:  // 1100
      digitalWrite(motor[0], HIGH);
      digitalWrite(motor[1], HIGH);
      digitalWrite(motor[2], LOW);
      digitalWrite(motor[3], LOW);
      break;
    case 2:  // 0100
      digitalWrite(motor[0], LOW);
      digitalWrite(motor[1], HIGH);
      digitalWrite(motor[2], LOW);
      digitalWrite(motor[3], LOW);
      break;
    case 3:  // 0110
      digitalWrite(motor[0], LOW);
      digitalWrite(motor[1], HIGH);
      digitalWrite(motor[2], HIGH);
      digitalWrite(motor[3], LOW);
      break;
    case 4:  // 0010
      digitalWrite(motor[0], LOW);
      digitalWrite(motor[1], LOW);
      digitalWrite(motor[2], HIGH);
      digitalWrite(motor[3], LOW);
      break;
    case 5:  // 0011
      digitalWrite(motor[0], LOW);
      digitalWrite(motor[1], LOW);
      digitalWrite(motor[2], HIGH);
      digitalWrite(motor[3], HIGH);
      break;
    case 6:  // 0001
      digitalWrite(motor[0], LOW);
      digitalWrite(motor[1], LOW);
      digitalWrite(motor[2], LOW);
      digitalWrite(motor[3], HIGH);
      break;
    case 7:  // 1001
      digitalWrite(motor[0], HIGH);
      digitalWrite(motor[1], LOW);
      digitalWrite(motor[2], LOW);
      digitalWrite(motor[3], HIGH);
      break;
  }
}

void turn(int steps, int periodo, bool sentido, int motor[4])   // Função que chama os passos e faz o motor girar
{
  int k = 0;
  for(int i = 0; i < steps; i++)
  {
    step(motor, k);

    if(!sentido)
    {
      k--;
      if(k < 0) k = 7;
    }
    else 
    {
      k++;
      if(k > 7) k = 0;
    }
    delayMicroseconds(periodo);
  }
  digitalWrite(motor[0], LOW);
  digitalWrite(motor[1], LOW);
  digitalWrite(motor[2], LOW);
  digitalWrite(motor[3], LOW);
}

void servo0()   // Função que faz o servo motor girar para a posição 0 graus
{
  for(int j = 0; j <= 20; j++)
  {
    digitalWrite(6, HIGH);
    delayMicroseconds(600);
    digitalWrite(6, LOW);
    for(int i = 0; i < 32; i++) delayMicroseconds(600);
  }
}

void servo180() // Função que faz o servo motor girar para a posição 180 graus
{
  for(int j = 0; j <= 20; j++)
  {
    digitalWrite(6, HIGH);
    delayMicroseconds(2400);
    digitalWrite(6, LOW);
    for(int i = 0; i < 7; i++) delayMicroseconds(2400);
  }
}

void maquina()  // Função que faz a máquina funcionar
{
  for(int i = 0; i <= 100; i++)
  {
    digitalWrite(A2, HIGH);
    delay(20);
    digitalWrite(A2, LOW);
    delay(20);
  }

  for(int i = 0; i <= 10; i++)
  {
    digitalWrite(A1, HIGH);
    delay(50);
    digitalWrite(A1, LOW);
    delay(50);
  }
}


void setupPin()
{
  pinMode(13, INPUT);   //sensor REED
  pinMode(A0, INPUT);   //sensor IR
  pinMode(A1, OUTPUT);  //led Azul
  pinMode(A2, OUTPUT);  //led Vermelho
  pinMode(6, OUTPUT);   //servo motor
  digitalWrite(6, LOW);

  servo0();

  pinMode(esteira[0], OUTPUT);
  pinMode(esteira[1], OUTPUT);
  pinMode(esteira[2], OUTPUT);
  pinMode(esteira[3], OUTPUT);

  pinMode(prato[0], OUTPUT);
  pinMode(prato[1], OUTPUT);
  pinMode(prato[2], OUTPUT);
  pinMode(prato[3], OUTPUT);

  //Serial.println("pinos setados");
}

void getEventControllable(Event &eventControllable)
{

    // if (!Serial.available())
    // {
    //     return;
    // }

    // String input = Serial.readStringUntil('\n');
    // input.trim();

    // int actualEvent = input.toInt();

    // if (actualEvent >= 0 && actualEvent < NUMBER_EVENT)
    // {
    //     setBit(eventControllable, actualEvent, true);
    // }
    // else
    // {
    //     Serial.println("There isn't this event or the input is not valid");
    // }

    //Serial.print("testando A0,");

    setBit(eventControllable, EVENT_A0, true);
    setBit(eventControllable, EVENT_A2, true);
    setBit(eventControllable, EVENT_A3, true);

    if(!digitalRead(A0))
    {
      setBit(eventControllable, EVENT_A1, true);
      //Serial.println("verdadeiro!");
    }
    else
    {
      setBit(eventControllable, EVENT_A1, false);
      //Serial.println("falso!");
    }
}

void getEventUncontrollable(Event &eventUncontrollable){


	if(EventUncontrollableb1()){
		setBit(eventUncontrollable,EVENT_B1, true);
	}
	if(EventUncontrollableb2()){
		setBit(eventUncontrollable,EVENT_B2, true);
	}
	if(EventUncontrollablebmag()){
		setBit(eventUncontrollable,EVENT_BMAG, true);
	}
	if(EventUncontrollablebnaomag()){
		setBit(eventUncontrollable,EVENT_BNAOMAG, true);
	}
	if(EventUncontrollableb3()){
		setBit(eventUncontrollable,EVENT_B3, true);
	}
	if(EventUncontrollablebe()){
		setBit(eventUncontrollable,EVENT_BE, true);
	}
	if(EventUncontrollablebd()){
		setBit(eventUncontrollable,EVENT_BD, true);
	}
	if(EventUncontrollableb0()){
		setBit(eventUncontrollable,EVENT_B0, true);
	}

  virtual_pins[0] = false;   //reset variáveis globais
  virtual_pins[1] = false;
  virtual_pins[2] = false;
  virtual_pins[3] = false;
  virtual_pins[4] = false;
  virtual_pins[5] = false;
  virtual_pins[6] = false;
  virtual_pins[7] = false;
}

bool EventUncontrollableb1(){
	return virtual_pins[0];   //b0
}

bool EventUncontrollableb2(){
	return virtual_pins[1];   //b1
}

bool EventUncontrollablebmag(){
	return virtual_pins[2];   //bmag
}

bool EventUncontrollablebnaomag(){
	return virtual_pins[3];   //bnmag
}

bool EventUncontrollableb3(){
	return virtual_pins[4];   //b3
}

bool EventUncontrollablebe(){
	return virtual_pins[5];   //be
}

bool EventUncontrollablebd(){
	return virtual_pins[6];   //bd
}

bool EventUncontrollableb0(){
	return virtual_pins[7];   //b0
}


//=======================================================| Esteira
void StateActionAutomaton0State0()    // G1
{
  //Serial.println("Carlos Drumn de Andrade |=========================================================");
  //delay(500);
  return;
}

void StateActionAutomaton0State1()    // G1
{
  Serial.println("Começando a girar a esteira");
  turn(5500, 1200, false, esteira);   // gira a esteira
  virtual_pins[0] = true;
  Serial.println("Terminou de girar a esteira");
  //set variável global
  return;
}



//=======================================================| Prato
void StateActionAutomaton1State0()    // G2
{
  return;
}
void StateActionAutomaton1State1()    // G2
{
  //Serial.println("Começando a girar a esteira");
  turn(850, 2000, true, prato);   // gira o prato
  virtual_pins[7] = true;
  //Serial.println("Terminou de girar a esteira");
  //set variável global
  return;
}//======================================================|


//=======================================================| Sensor Magnético G3
void StateActionAutomaton2State0()  // Sensor dormindo
{
	// Serial.println("A2S0");
 	// delay(500);
  return;
}

void StateActionAutomaton2State1()  // Sensor pode sentir
{
	if(digitalRead(13))
  {
    virtual_pins[2] = true;
  }
  else
  {
    virtual_pins[3] = true;
  }
  return;
}

void StateActionAutomaton2State2()  // Sensor volta a dormir
{
	// Serial.println("A2S2");
 	// delay(500);

  virtual_pins[4] = true;   //b3
  return;
}

void StateActionAutomaton2State3()  // Sensor volta a dormir
{
	// Serial.println("A2S3");
 	// delay(500);

  virtual_pins[4] = true;   //b3
  return;
}


//=======================================================| Braço G4
void StateActionAutomaton3State0()  //braço na direita
{
  //servo0();
  return;
}

void StateActionAutomaton3State1()  //braço se movendo para a esquerda
{
  servo0();
  virtual_pins[5] = true;   // be
  return;
}

void StateActionAutomaton3State2()  //braço na esquerda
{
  //servo180();
  return;
}

void StateActionAutomaton3State3()  //braço se movendo para a direita
{
  servo180();
  virtual_pins[6] = true;   // bd
  return;
}

