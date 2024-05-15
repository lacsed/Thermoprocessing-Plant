
#ifndef AUTOMATON_H
#define AUTOMATON_H

#include "Event.h"


typedef void (*GenericAction)();

class Automaton
{
public:
    Automaton(int numStates, Event *enabledEventStates, int (*MakeTransition)(int state, Event eventOccurred), void (*Loop)(int state));
    Automaton();
    ~Automaton();

    int getActualState();                                  // Returns the current state of the automaton
    int getNumStates();                                    // Returns the total number of states in the automaton
    Event getEnabledEvent();                               // Returns the value of enabled events for the automaton
    void setActualState(int state);                        // Sets the current state of the automaton
    void setEvent(Event event);                            // Sets the value of the current event of the automaton
    Event *enabledEventStates;                             // Pointer to the list of enabled event values
    int (*MakeTransition)(int state, Event eventOccurred); // Pointer to the state transition function
    void (*Loop)(int state);                               // Pointer to the current state execution function

private:
    int actualState = 0; // Current state of the automaton
    Event actualEvent;   // Value of the current event of the automaton
    int numStates;       // Total number of states in the automaton
};

void setupPin();
void getEventControllable(Event &eventControllable);     // Obtains Controllablble events
void getEventUncontrollable(Event &eventUncontrollable); // Obtains Uncontrollablble events

void Automaton0Loop(int State); 

void Automaton1Loop(int State); 

void Automaton2Loop(int State); 

void Automaton3Loop(int State); 

void Automaton4Loop(int State); 

void Automaton5Loop(int State); 

void Automaton6Loop(int State); 

void Automaton7Loop(int State); 

void Automaton8Loop(int State); 

void Automaton9Loop(int State); 

void Automaton10Loop(int State); 

void Automaton11Loop(int State); 

void Automaton12Loop(int State); 



bool EventUncontrollableb1();
bool EventUncontrollableb2();
bool EventUncontrollablebmag();
bool EventUncontrollablebnaomag();
bool EventUncontrollableb3();
bool EventUncontrollablebe();
bool EventUncontrollablebd();
bool EventUncontrollableb0();


void StateActionAutomaton0State0();
void StateActionAutomaton0State1();

void StateActionAutomaton1State0();
void StateActionAutomaton1State1();

void StateActionAutomaton2State0();
void StateActionAutomaton2State1();
void StateActionAutomaton2State2();
void StateActionAutomaton2State3();

void StateActionAutomaton3State0();
void StateActionAutomaton3State1();
void StateActionAutomaton3State2();
void StateActionAutomaton3State3();



int MakeTransitionAutomaton0(int State, Event eventOccurred);
int MakeTransitionAutomaton1(int State, Event eventOccurred);
int MakeTransitionAutomaton2(int State, Event eventOccurred);
int MakeTransitionAutomaton3(int State, Event eventOccurred);
int MakeTransitionAutomaton4(int State, Event eventOccurred);
int MakeTransitionAutomaton5(int State, Event eventOccurred);
int MakeTransitionAutomaton6(int State, Event eventOccurred);
int MakeTransitionAutomaton7(int State, Event eventOccurred);
int MakeTransitionAutomaton8(int State, Event eventOccurred);
int MakeTransitionAutomaton9(int State, Event eventOccurred);
int MakeTransitionAutomaton10(int State, Event eventOccurred);
int MakeTransitionAutomaton11(int State, Event eventOccurred);
int MakeTransitionAutomaton12(int State, Event eventOccurred);


#endif