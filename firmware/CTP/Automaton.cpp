#include "Automaton.h"
#include "Event.h"

Automaton::Automaton(int numStates, Event *enabledEventStates, int (*MakeTransition)(int state, Event eventOccurred), void (*Loop)(int state))
    : numStates(numStates), enabledEventStates(enabledEventStates), MakeTransition(MakeTransition), Loop(Loop) {}

Automaton::Automaton() {}

Automaton::~Automaton() {}

void Automaton::setEvent(Event event)
{
    actualEvent = event;
}

void Automaton::setActualState(int state)
{
    actualState = state;
}

int Automaton::getActualState()
{
    return actualState;
}

int Automaton::getNumStates()
{
    return numStates;
}

Event Automaton::getEnabledEvent()
{
    return enabledEventStates[actualState];
}

GenericAction ActionAutomatons0[2]={ &StateActionAutomaton0State0,&StateActionAutomaton0State1 };
GenericAction ActionAutomatons1[2]={ &StateActionAutomaton1State0,&StateActionAutomaton1State1 };
GenericAction ActionAutomatons2[4]={ &StateActionAutomaton2State0,&StateActionAutomaton2State1,&StateActionAutomaton2State2,&StateActionAutomaton2State3 };
GenericAction ActionAutomatons3[4]={ &StateActionAutomaton3State0,&StateActionAutomaton3State1,&StateActionAutomaton3State2,&StateActionAutomaton3State3 };
GenericAction ActionAutomatons4[1]={[](){}};
GenericAction ActionAutomatons5[1]={[](){}};
GenericAction ActionAutomatons6[1]={[](){}};
GenericAction ActionAutomatons7[1]={[](){}};
GenericAction ActionAutomatons8[1]={[](){}};
GenericAction ActionAutomatons9[1]={[](){}};
GenericAction ActionAutomatons10[1]={[](){}};
GenericAction ActionAutomatons11[1]={[](){}};
GenericAction ActionAutomatons12[1]={[](){}};


void Automaton0Loop(int State){
	ActionAutomatons0[State]();
}

void Automaton1Loop(int State){
	ActionAutomatons1[State]();
}

void Automaton2Loop(int State){
	ActionAutomatons2[State]();
}

void Automaton3Loop(int State){
	ActionAutomatons3[State]();
}

void Automaton4Loop(int State){
	ActionAutomatons4[State]();
}

void Automaton5Loop(int State){
	ActionAutomatons5[State]();
}

void Automaton6Loop(int State){
	ActionAutomatons6[State]();
}

void Automaton7Loop(int State){
	ActionAutomatons7[State]();
}

void Automaton8Loop(int State){
	ActionAutomatons8[State]();
}

void Automaton9Loop(int State){
	ActionAutomatons9[State]();
}

void Automaton10Loop(int State){
	ActionAutomatons10[State]();
}

void Automaton11Loop(int State){
	ActionAutomatons11[State]();
}

void Automaton12Loop(int State){
	ActionAutomatons12[State]();
}



int MakeTransitionAutomaton0(int State, Event eventOccurred) 
{ 
	if (State == 0 && (getBit(eventOccurred,EVENT_A1))){ 
		return 1;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_B1))){ 
		return 0;
	}

	return(State);
}

int MakeTransitionAutomaton1(int State, Event eventOccurred) 
{ 
  
	if (State == 0 && (getBit(eventOccurred,EVENT_A2))){ 
		return 1;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_B2))){ 
		return 0;
	}

	return(State);
}

int MakeTransitionAutomaton2(int State, Event eventOccurred) 
{ 
	if (State == 0 && (getBit(eventOccurred,EVENT_A3))){ 
		return 1;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_BMAG))){ 
		return 2;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_BNAOMAG))){ 
		return 3;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_B3))){ 
		return 0;
	}
	if (State == 3 && (getBit(eventOccurred,EVENT_B3))){ 
		return 0;
	}

	return(State);
}

int MakeTransitionAutomaton3(int State, Event eventOccurred) 
{ 
	if (State == 0 && (getBit(eventOccurred,EVENT_AE))){ 
		return 1;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_BE))){ 
		return 2;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_AD))){ 
		return 3;
	}
	if (State == 3 && (getBit(eventOccurred,EVENT_BD))){ 
		return 0;
	}

	return(State);
}

int MakeTransitionAutomaton4(int State, Event eventOccurred) 
{ 
	if (State == 0 && (getBit(eventOccurred,EVENT_BMAG))){ 
		return 0;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_BNAOMAG))){ 
		return 0;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_B2))){ 
		return 1;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_B1))){ 
		return 1;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_B3))){ 
		return 1;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_A1))){ 
		return 0;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_A2))){ 
		return 0;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_A3))){ 
		return 0;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_BMAG))){ 
		return 1;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_BNAOMAG))){ 
		return 1;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_B2))){ 
		return 1;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_B1))){ 
		return 1;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_B3))){ 
		return 1;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_B0))){ 
		return 1;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_A1))){ 
		return 1;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_A2))){ 
		return 1;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_A3))){ 
		return 1;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_A0))){ 
		return 2;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_BMAG))){ 
		return 2;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_BNAOMAG))){ 
		return 2;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_B2))){ 
		return 1;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_B1))){ 
		return 1;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_B3))){ 
		return 1;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_B0))){ 
		return 0;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_A1))){ 
		return 2;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_A2))){ 
		return 2;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_A3))){ 
		return 2;
	}

	return(State);
}

int MakeTransitionAutomaton5(int State, Event eventOccurred) 
{ 
	if (State == 0 && (getBit(eventOccurred,EVENT_A0))){ 
		return 1;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_A1))){ 
		return 1;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_B1))){ 
		return 0;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_B0))){ 
		return 0;
	}

	return(State);
}

int MakeTransitionAutomaton6(int State, Event eventOccurred) 
{ 
	if (State == 0 && (getBit(eventOccurred,EVENT_A0))){ 
		return 1;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_A2))){ 
		return 1;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_B2))){ 
		return 0;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_B0))){ 
		return 0;
	}

	return(State);
}

int MakeTransitionAutomaton7(int State, Event eventOccurred) 
{ 
	if (State == 0 && (getBit(eventOccurred,EVENT_A0))){ 
		return 1;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_A3))){ 
		return 1;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_BMAG))){ 
		return 1;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_BNAOMAG))){ 
		return 1;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_B3))){ 
		return 0;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_B0))){ 
		return 0;
	}

	return(State);
}

int MakeTransitionAutomaton8(int State, Event eventOccurred) 
{ 
	if (State == 0 && (getBit(eventOccurred,EVENT_A0))){ 
		return 1;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_AE))){ 
		return 1;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_AD))){ 
		return 1;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_BE))){ 
		return 0;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_BD))){ 
		return 0;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_B0))){ 
		return 0;
	}

	return(State);
}

int MakeTransitionAutomaton9(int State, Event eventOccurred) 
{ 
	if (State == 0 && (getBit(eventOccurred,EVENT_B1))){ 
		return 1;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_B0))){ 
		return 0;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_A0))){ 
		return 0;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_A1))){ 
		return 0;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_B0))){ 
		return 1;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_A0))){ 
		return 2;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_B1))){ 
		return 3;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_B0))){ 
		return 2;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_B2))){ 
		return 2;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_A1))){ 
		return 2;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_A2))){ 
		return 4;
	}
	if (State == 3 && (getBit(eventOccurred,EVENT_B0))){ 
		return 3;
	}
	if (State == 3 && (getBit(eventOccurred,EVENT_B2))){ 
		return 3;
	}
	if (State == 3 && (getBit(eventOccurred,EVENT_A2))){ 
		return 5;
	}
	if (State == 4 && (getBit(eventOccurred,EVENT_B1))){ 
		return 5;
	}
	if (State == 4 && (getBit(eventOccurred,EVENT_B0))){ 
		return 4;
	}
	if (State == 4 && (getBit(eventOccurred,EVENT_B2))){ 
		return 0;
	}
	if (State == 4 && (getBit(eventOccurred,EVENT_A0))){ 
		return 4;
	}
	if (State == 4 && (getBit(eventOccurred,EVENT_A1))){ 
		return 4;
	}
	if (State == 5 && (getBit(eventOccurred,EVENT_B0))){ 
		return 5;
	}
	if (State == 5 && (getBit(eventOccurred,EVENT_B2))){ 
		return 1;
	}
	if (State == 5 && (getBit(eventOccurred,EVENT_A0))){ 
		return 2;
	}

	return(State);
}

int MakeTransitionAutomaton10(int State, Event eventOccurred) 
{ 
	if (State == 0 && (getBit(eventOccurred,EVENT_B2))){ 
		return 1;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_B0))){ 
		return 0;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_BMAG))){ 
		return 0;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_BNAOMAG))){ 
		return 0;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_B3))){ 
		return 0;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_A0))){ 
		return 0;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_A2))){ 
		return 0;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_B0))){ 
		return 1;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_BMAG))){ 
		return 1;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_BNAOMAG))){ 
		return 1;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_B3))){ 
		return 1;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_A0))){ 
		return 2;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_B0))){ 
		return 3;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_BMAG))){ 
		return 2;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_BNAOMAG))){ 
		return 2;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_B3))){ 
		return 2;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_A2))){ 
		return 4;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_A3))){ 
		return 0;
	}
	if (State == 3 && (getBit(eventOccurred,EVENT_BMAG))){ 
		return 3;
	}
	if (State == 3 && (getBit(eventOccurred,EVENT_BNAOMAG))){ 
		return 3;
	}
	if (State == 3 && (getBit(eventOccurred,EVENT_B3))){ 
		return 3;
	}
	if (State == 3 && (getBit(eventOccurred,EVENT_A2))){ 
		return 5;
	}
	if (State == 3 && (getBit(eventOccurred,EVENT_A3))){ 
		return 0;
	}
	if (State == 4 && (getBit(eventOccurred,EVENT_B2))){ 
		return 6;
	}
	if (State == 4 && (getBit(eventOccurred,EVENT_B0))){ 
		return 5;
	}
	if (State == 4 && (getBit(eventOccurred,EVENT_BMAG))){ 
		return 4;
	}
	if (State == 4 && (getBit(eventOccurred,EVENT_BNAOMAG))){ 
		return 4;
	}
	if (State == 4 && (getBit(eventOccurred,EVENT_B3))){ 
		return 4;
	}
	if (State == 4 && (getBit(eventOccurred,EVENT_A3))){ 
		return 0;
	}
	if (State == 5 && (getBit(eventOccurred,EVENT_B2))){ 
		return 7;
	}
	if (State == 5 && (getBit(eventOccurred,EVENT_BMAG))){ 
		return 5;
	}
	if (State == 5 && (getBit(eventOccurred,EVENT_BNAOMAG))){ 
		return 5;
	}
	if (State == 5 && (getBit(eventOccurred,EVENT_B3))){ 
		return 5;
	}
	if (State == 5 && (getBit(eventOccurred,EVENT_A3))){ 
		return 0;
	}
	if (State == 6 && (getBit(eventOccurred,EVENT_B0))){ 
		return 7;
	}
	if (State == 6 && (getBit(eventOccurred,EVENT_BMAG))){ 
		return 6;
	}
	if (State == 6 && (getBit(eventOccurred,EVENT_BNAOMAG))){ 
		return 6;
	}
	if (State == 6 && (getBit(eventOccurred,EVENT_B3))){ 
		return 6;
	}
	if (State == 6 && (getBit(eventOccurred,EVENT_A3))){ 
		return 1;
	}
	if (State == 7 && (getBit(eventOccurred,EVENT_BMAG))){ 
		return 7;
	}
	if (State == 7 && (getBit(eventOccurred,EVENT_BNAOMAG))){ 
		return 7;
	}
	if (State == 7 && (getBit(eventOccurred,EVENT_B3))){ 
		return 7;
	}
	if (State == 7 && (getBit(eventOccurred,EVENT_A3))){ 
		return 1;
	}

	return(State);
}

int MakeTransitionAutomaton11(int State, Event eventOccurred) 
{ 
	if (State == 0 && (getBit(eventOccurred,EVENT_BMAG))){ 
		return 0;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_BNAOMAG))){ 
		return 0;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_B0))){ 
		return 0;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_B3))){ 
		return 1;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_BD))){ 
		return 0;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_A0))){ 
		return 0;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_A3))){ 
		return 0;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_B0))){ 
		return 1;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_BD))){ 
		return 1;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_BE))){ 
		return 1;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_A0))){ 
		return 2;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_AE))){ 
		return 1;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_B0))){ 
		return 3;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_BD))){ 
		return 2;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_BE))){ 
		return 2;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_AE))){ 
		return 2;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_AD))){ 
		return 0;
	}
	if (State == 3 && (getBit(eventOccurred,EVENT_BD))){ 
		return 3;
	}
	if (State == 3 && (getBit(eventOccurred,EVENT_BE))){ 
		return 3;
	}
	if (State == 3 && (getBit(eventOccurred,EVENT_AE))){ 
		return 3;
	}
	if (State == 3 && (getBit(eventOccurred,EVENT_AD))){ 
		return 0;
	}

	return(State);
}

int MakeTransitionAutomaton12(int State, Event eventOccurred) 
{ 
	if (State == 0 && (getBit(eventOccurred,EVENT_BMAG))){ 
		return 1;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_BNAOMAG))){ 
		return 2;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_B3))){ 
		return 3;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_B0))){ 
		return 4;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_BD))){ 
		return 5;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_A0))){ 
		return 4;
	}
	if (State == 0 && (getBit(eventOccurred,EVENT_A3))){ 
		return 4;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_B3))){ 
		return 15;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_B0))){ 
		return 6;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_BD))){ 
		return 1;
	}
	if (State == 1 && (getBit(eventOccurred,EVENT_AE))){ 
		return 16;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_B3))){ 
		return 10;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_B0))){ 
		return 2;
	}
	if (State == 2 && (getBit(eventOccurred,EVENT_A0))){ 
		return 3;
	}
	if (State == 3 && (getBit(eventOccurred,EVENT_BMAG))){ 
		return 1;
	}
	if (State == 3 && (getBit(eventOccurred,EVENT_BNAOMAG))){ 
		return 10;
	}
	if (State == 3 && (getBit(eventOccurred,EVENT_B3))){ 
		return 12;
	}
	if (State == 3 && (getBit(eventOccurred,EVENT_B0))){ 
		return 13;
	}
	if (State == 3 && (getBit(eventOccurred,EVENT_BD))){ 
		return 0;
	}
	if (State == 3 && (getBit(eventOccurred,EVENT_BE))){ 
		return 3;
	}
	if (State == 3 && (getBit(eventOccurred,EVENT_A0))){ 
		return 7;
	}
	if (State == 3 && (getBit(eventOccurred,EVENT_A3))){ 
		return 13;
	}
	if (State == 3 && (getBit(eventOccurred,EVENT_AE))){ 
		return 3;
	}
	if (State == 3 && (getBit(eventOccurred,EVENT_AD))){ 
		return 4;
	}
	if (State == 4 && (getBit(eventOccurred,EVENT_BMAG))){ 
		return 6;
	}
	if (State == 4 && (getBit(eventOccurred,EVENT_BNAOMAG))){ 
		return 2;
	}
	if (State == 4 && (getBit(eventOccurred,EVENT_B3))){ 
		return 7;
	}
	if (State == 4 && (getBit(eventOccurred,EVENT_B0))){ 
		return 0;
	}
	if (State == 4 && (getBit(eventOccurred,EVENT_BD))){ 
		return 8;
	}
	if (State == 4 && (getBit(eventOccurred,EVENT_A3))){ 
		return 0;
	}
	if (State == 5 && (getBit(eventOccurred,EVENT_B3))){ 
		return 0;
	}
	if (State == 5 && (getBit(eventOccurred,EVENT_B0))){ 
		return 16;
	}
	if (State == 5 && (getBit(eventOccurred,EVENT_BD))){ 
		return 12;
	}
	if (State == 5 && (getBit(eventOccurred,EVENT_A0))){ 
		return 8;
	}
	if (State == 6 && (getBit(eventOccurred,EVENT_B3))){ 
		return 9;
	}
	if (State == 6 && (getBit(eventOccurred,EVENT_BD))){ 
		return 6;
	}
	if (State == 6 && (getBit(eventOccurred,EVENT_AE))){ 
		return 7;
	}
	if (State == 7 && (getBit(eventOccurred,EVENT_B3))){ 
		return 10;
	}
	if (State == 7 && (getBit(eventOccurred,EVENT_B0))){ 
		return 3;
	}
	if (State == 7 && (getBit(eventOccurred,EVENT_BD))){ 
		return 4;
	}
	if (State == 7 && (getBit(eventOccurred,EVENT_BE))){ 
		return 15;
	}
	if (State == 7 && (getBit(eventOccurred,EVENT_A0))){ 
		return 3;
	}
	if (State == 7 && (getBit(eventOccurred,EVENT_A3))){ 
		return 3;
	}
	if (State == 8 && (getBit(eventOccurred,EVENT_B3))){ 
		return 4;
	}
	if (State == 8 && (getBit(eventOccurred,EVENT_B0))){ 
		return 5;
	}
	if (State == 9 && (getBit(eventOccurred,EVENT_B3))){ 
		return 10;
	}
	if (State == 9 && (getBit(eventOccurred,EVENT_B0))){ 
		return 15;
	}
	if (State == 9 && (getBit(eventOccurred,EVENT_BD))){ 
		return 9;
	}
	if (State == 9 && (getBit(eventOccurred,EVENT_AE))){ 
		return 10;
	}
	if (State == 10 && (getBit(eventOccurred,EVENT_B3))){ 
		return 11;
	}
	if (State == 10 && (getBit(eventOccurred,EVENT_B0))){ 
		return 10;
	}
	if (State == 10 && (getBit(eventOccurred,EVENT_BD))){ 
		return 2;
	}
	if (State == 10 && (getBit(eventOccurred,EVENT_BE))){ 
		return 10;
	}
	if (State == 10 && (getBit(eventOccurred,EVENT_A0))){ 
		return 12;
	}
	if (State == 11 && (getBit(eventOccurred,EVENT_B0))){ 
		return 11;
	}
	if (State == 11 && (getBit(eventOccurred,EVENT_BD))){ 
		return 10;
	}
	if (State == 11 && (getBit(eventOccurred,EVENT_A0))){ 
		return 5;
	}
	if (State == 12 && (getBit(eventOccurred,EVENT_B3))){ 
		return 5;
	}
	if (State == 12 && (getBit(eventOccurred,EVENT_B0))){ 
		return 14;
	}
	if (State == 12 && (getBit(eventOccurred,EVENT_BD))){ 
		return 3;
	}
	if (State == 12 && (getBit(eventOccurred,EVENT_BE))){ 
		return 12;
	}
	if (State == 12 && (getBit(eventOccurred,EVENT_AE))){ 
		return 12;
	}
	if (State == 12 && (getBit(eventOccurred,EVENT_AD))){ 
		return 7;
	}
	if (State == 13 && (getBit(eventOccurred,EVENT_BMAG))){ 
		return 6;
	}
	if (State == 13 && (getBit(eventOccurred,EVENT_BNAOMAG))){ 
		return 10;
	}
	if (State == 13 && (getBit(eventOccurred,EVENT_B3))){ 
		return 14;
	}
	if (State == 13 && (getBit(eventOccurred,EVENT_BD))){ 
		return 4;
	}
	if (State == 13 && (getBit(eventOccurred,EVENT_BE))){ 
		return 13;
	}
	if (State == 13 && (getBit(eventOccurred,EVENT_AE))){ 
		return 13;
	}
	if (State == 13 && (getBit(eventOccurred,EVENT_AD))){ 
		return 0;
	}
	if (State == 14 && (getBit(eventOccurred,EVENT_B3))){ 
		return 16;
	}
	if (State == 14 && (getBit(eventOccurred,EVENT_BD))){ 
		return 13;
	}
	if (State == 14 && (getBit(eventOccurred,EVENT_BE))){ 
		return 14;
	}
	if (State == 14 && (getBit(eventOccurred,EVENT_AE))){ 
		return 14;
	}
	if (State == 14 && (getBit(eventOccurred,EVENT_AD))){ 
		return 3;
	}
	if (State == 15 && (getBit(eventOccurred,EVENT_B3))){ 
		return 10;
	}
	if (State == 15 && (getBit(eventOccurred,EVENT_B0))){ 
		return 9;
	}
	if (State == 15 && (getBit(eventOccurred,EVENT_BD))){ 
		return 15;
	}
	if (State == 15 && (getBit(eventOccurred,EVENT_A0))){ 
		return 3;
	}
	if (State == 15 && (getBit(eventOccurred,EVENT_AE))){ 
		return 10;
	}
	if (State == 16 && (getBit(eventOccurred,EVENT_B3))){ 
		return 10;
	}
	if (State == 16 && (getBit(eventOccurred,EVENT_B0))){ 
		return 7;
	}
	if (State == 16 && (getBit(eventOccurred,EVENT_BD))){ 
		return 14;
	}
	if (State == 16 && (getBit(eventOccurred,EVENT_BE))){ 
		return 9;
	}

	return(State);
}


