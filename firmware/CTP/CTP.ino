#include "Automaton.h"
#include "Event.h"

// Define the number of automatons
#define NUMBER_AUTOMATON 4
#define NUMBER_SUPERVISOR 9

int actualState;

// Functions
void executeTransition(Event eventOccurred);

// Initialize Events
int firstEventUncontrollable = 0;
int firstEventControllable = 0;

Event eventControllable = createEvent();
Event eventUncontrollable = createEvent();

Event eventEnabledControllable = createEvent();
Event eventEnabledUncontrollable = createEvent();

Event emptyEvent = createEvent();
Event eventEnabled = createEvent();

Event eventOccurred = createEvent();

// Create a vector to store the automatons
Automaton automata[NUMBER_AUTOMATON];
Automaton supervisor[NUMBER_SUPERVISOR];

uint8_t eventDataAUT0EV0[2] = {0b11011111, 0b11111111};
uint8_t eventDataAUT0EV1[2] = {0b11101111, 0b11111111};

Event enabledEventStatesAutomaton0[2] = { createEventFromData(eventDataAUT0EV0), createEventFromData(eventDataAUT0EV1)};
uint8_t eventDataAUT1EV0[2] = {0b11110111, 0b11111111};
uint8_t eventDataAUT1EV1[2] = {0b11111011, 0b11111111};

Event enabledEventStatesAutomaton1[2] = { createEventFromData(eventDataAUT1EV0), createEventFromData(eventDataAUT1EV1)};
uint8_t eventDataAUT2EV0[2] = {0b11111100, 0b01111111};
uint8_t eventDataAUT2EV1[2] = {0b11111111, 0b00111111};
uint8_t eventDataAUT2EV2[2] = {0b11111100, 0b10111111};
uint8_t eventDataAUT2EV3[2] = {0b11111100, 0b10111111};

Event enabledEventStatesAutomaton2[4] = { createEventFromData(eventDataAUT2EV0), createEventFromData(eventDataAUT2EV1), createEventFromData(eventDataAUT2EV2), createEventFromData(eventDataAUT2EV3)};
uint8_t eventDataAUT3EV0[2] = {0b11111111, 0b11001011};
uint8_t eventDataAUT3EV1[2] = {0b11111111, 0b11100011};
uint8_t eventDataAUT3EV2[2] = {0b11111111, 0b11000111};
uint8_t eventDataAUT3EV3[2] = {0b11111111, 0b11010011};

Event enabledEventStatesAutomaton3[4] = { createEventFromData(eventDataAUT3EV0), createEventFromData(eventDataAUT3EV1), createEventFromData(eventDataAUT3EV2), createEventFromData(eventDataAUT3EV3)};
uint8_t eventDataAUT4EV0[2] = {0b11111111, 0b11111100};
uint8_t eventDataAUT4EV1[2] = {0b11111111, 0b11111111};
uint8_t eventDataAUT4EV2[2] = {0b11111111, 0b11111110};

Event enabledEventStatesAutomaton4[3] = { createEventFromData(eventDataAUT4EV0), createEventFromData(eventDataAUT4EV1), createEventFromData(eventDataAUT4EV2)};
uint8_t eventDataAUT5EV0[2] = {0b11011111, 0b11111101};
uint8_t eventDataAUT5EV1[2] = {0b11101111, 0b11111110};

Event enabledEventStatesAutomaton5[2] = { createEventFromData(eventDataAUT5EV0), createEventFromData(eventDataAUT5EV1)};
uint8_t eventDataAUT6EV0[2] = {0b11110111, 0b11111101};
uint8_t eventDataAUT6EV1[2] = {0b11111011, 0b11111110};

Event enabledEventStatesAutomaton6[2] = { createEventFromData(eventDataAUT6EV0), createEventFromData(eventDataAUT6EV1)};
uint8_t eventDataAUT7EV0[2] = {0b11111100, 0b01111101};
uint8_t eventDataAUT7EV1[2] = {0b11111111, 0b10111110};

Event enabledEventStatesAutomaton7[2] = { createEventFromData(eventDataAUT7EV0), createEventFromData(eventDataAUT7EV1)};
uint8_t eventDataAUT8EV0[2] = {0b11111111, 0b11001101};
uint8_t eventDataAUT8EV1[2] = {0b11111111, 0b11110010};

Event enabledEventStatesAutomaton8[2] = { createEventFromData(eventDataAUT8EV0), createEventFromData(eventDataAUT8EV1)};
uint8_t eventDataAUT9EV0[2] = {0b11110011, 0b11111111};
uint8_t eventDataAUT9EV1[2] = {0b11000011, 0b11111111};
uint8_t eventDataAUT9EV2[2] = {0b11111111, 0b11111110};
uint8_t eventDataAUT9EV3[2] = {0b11001111, 0b11111110};
uint8_t eventDataAUT9EV4[2] = {0b11111011, 0b11111111};
uint8_t eventDataAUT9EV5[2] = {0b11001011, 0b11111111};

Event enabledEventStatesAutomaton9[6] = { createEventFromData(eventDataAUT9EV0), createEventFromData(eventDataAUT9EV1), createEventFromData(eventDataAUT9EV2), createEventFromData(eventDataAUT9EV3), createEventFromData(eventDataAUT9EV4), createEventFromData(eventDataAUT9EV5)};
uint8_t eventDataAUT10EV0[2] = {0b11111111, 0b10111111};
uint8_t eventDataAUT10EV1[2] = {0b11110011, 0b10111111};
uint8_t eventDataAUT10EV2[2] = {0b11110111, 0b11111110};
uint8_t eventDataAUT10EV3[2] = {0b11110111, 0b11111100};
uint8_t eventDataAUT10EV4[2] = {0b11111011, 0b11111110};
uint8_t eventDataAUT10EV5[2] = {0b11111011, 0b11111100};
uint8_t eventDataAUT10EV6[2] = {0b11110011, 0b11111110};
uint8_t eventDataAUT10EV7[2] = {0b11110011, 0b11111100};

Event enabledEventStatesAutomaton10[8] = { createEventFromData(eventDataAUT10EV0), createEventFromData(eventDataAUT10EV1), createEventFromData(eventDataAUT10EV2), createEventFromData(eventDataAUT10EV3), createEventFromData(eventDataAUT10EV4), createEventFromData(eventDataAUT10EV5), createEventFromData(eventDataAUT10EV6), createEventFromData(eventDataAUT10EV7)};
uint8_t eventDataAUT11EV0[2] = {0b11111111, 0b11010011};
uint8_t eventDataAUT11EV1[2] = {0b11111100, 0b00111011};
uint8_t eventDataAUT11EV2[2] = {0b11111100, 0b00111110};
uint8_t eventDataAUT11EV3[2] = {0b11111100, 0b00111100};

Event enabledEventStatesAutomaton11[4] = { createEventFromData(eventDataAUT11EV0), createEventFromData(eventDataAUT11EV1), createEventFromData(eventDataAUT11EV2), createEventFromData(eventDataAUT11EV3)};
uint8_t eventDataAUT12EV0[2] = {0b11111111, 0b11010011};
uint8_t eventDataAUT12EV1[2] = {0b11111100, 0b10011010};
uint8_t eventDataAUT12EV2[2] = {0b11111100, 0b10000011};
uint8_t eventDataAUT12EV3[2] = {0b11111111, 0b11111111};
uint8_t eventDataAUT12EV4[2] = {0b11111111, 0b11010010};
uint8_t eventDataAUT12EV5[2] = {0b11111100, 0b10010011};
uint8_t eventDataAUT12EV6[2] = {0b11111100, 0b10011000};
uint8_t eventDataAUT12EV7[2] = {0b11111100, 0b11110011};
uint8_t eventDataAUT12EV8[2] = {0b11111100, 0b10000010};
uint8_t eventDataAUT12EV9[2] = {0b11111100, 0b10011010};
uint8_t eventDataAUT12EV10[2] = {0b11111100, 0b10110011};
uint8_t eventDataAUT12EV11[2] = {0b11111100, 0b00010011};
uint8_t eventDataAUT12EV12[2] = {0b11111100, 0b10111110};
uint8_t eventDataAUT12EV13[2] = {0b11111111, 0b10111100};
uint8_t eventDataAUT12EV14[2] = {0b11111100, 0b10111100};
uint8_t eventDataAUT12EV15[2] = {0b11111100, 0b10011011};
uint8_t eventDataAUT12EV16[2] = {0b11111100, 0b10110010};

Event enabledEventStatesAutomaton12[17] = { createEventFromData(eventDataAUT12EV0), createEventFromData(eventDataAUT12EV1), createEventFromData(eventDataAUT12EV2), createEventFromData(eventDataAUT12EV3), createEventFromData(eventDataAUT12EV4), createEventFromData(eventDataAUT12EV5), createEventFromData(eventDataAUT12EV6), createEventFromData(eventDataAUT12EV7), createEventFromData(eventDataAUT12EV8), createEventFromData(eventDataAUT12EV9), createEventFromData(eventDataAUT12EV10), createEventFromData(eventDataAUT12EV11), createEventFromData(eventDataAUT12EV12), createEventFromData(eventDataAUT12EV13), createEventFromData(eventDataAUT12EV14), createEventFromData(eventDataAUT12EV15), createEventFromData(eventDataAUT12EV16)};


void setup()
{

    // Initialize the automatons
    
		automata[0] = Automaton(2,enabledEventStatesAutomaton0,&MakeTransitionAutomaton0,&Automaton0Loop);
		automata[1] = Automaton(2,enabledEventStatesAutomaton1,&MakeTransitionAutomaton1,&Automaton1Loop);
		automata[2] = Automaton(4,enabledEventStatesAutomaton2,&MakeTransitionAutomaton2,&Automaton2Loop);
		automata[3] = Automaton(4,enabledEventStatesAutomaton3,&MakeTransitionAutomaton3,&Automaton3Loop);
		supervisor[0] = Automaton(3,enabledEventStatesAutomaton4,&MakeTransitionAutomaton4,&Automaton4Loop);
		supervisor[1] = Automaton(2,enabledEventStatesAutomaton5,&MakeTransitionAutomaton5,&Automaton5Loop);
		supervisor[2] = Automaton(2,enabledEventStatesAutomaton6,&MakeTransitionAutomaton6,&Automaton6Loop);
		supervisor[3] = Automaton(2,enabledEventStatesAutomaton7,&MakeTransitionAutomaton7,&Automaton7Loop);
		supervisor[4] = Automaton(2,enabledEventStatesAutomaton8,&MakeTransitionAutomaton8,&Automaton8Loop);
		supervisor[5] = Automaton(6,enabledEventStatesAutomaton9,&MakeTransitionAutomaton9,&Automaton9Loop);
		supervisor[6] = Automaton(8,enabledEventStatesAutomaton10,&MakeTransitionAutomaton10,&Automaton10Loop);
		supervisor[7] = Automaton(4,enabledEventStatesAutomaton11,&MakeTransitionAutomaton11,&Automaton11Loop);
		supervisor[8] = Automaton(17,enabledEventStatesAutomaton12,&MakeTransitionAutomaton12,&Automaton12Loop);

    Serial.begin(9600);
    setupPin();
}

// Execute the main cycle
void loop()
{

    // Get the system events
    
    getEventUncontrollable(eventUncontrollable);
    getEventControllable(eventControllable);

    Serial.print("Eventos Controlaveis: ");
    printEvent(eventControllable);
    Serial.print("Eventos não Controlaveis: ");
    printEvent(eventUncontrollable);

    // Free the events that are physically possible
    zeroEvent(eventEnabled);
    // Check the events that are physically possible
    for (int i = 0; i < NUMBER_AUTOMATON; i++)
    {
        actualState = automata[i].getActualState();
        bitwiseOr(eventEnabled, eventEnabled, automata[i].enabledEventStates[actualState]);
    }

    bitwiseAnd(eventEnabledUncontrollable, eventUncontrollable, eventEnabled);
    bitwiseAnd(eventEnabledControllable, eventControllable, eventEnabled);

    

    if (!areEqual(eventEnabledUncontrollable, emptyEvent))
    {
      Serial.println("funciona!");
      Serial.print("Eventos não Controlaveis: ");
      printEvent(eventUncontrollable);

        for (int i = 0; i < NUMBER_EVENT; i++)
        {
            int index = (firstEventUncontrollable + i) % NUMBER_EVENT;
            // Get one Uncontrollable Event each time
            bool existEvent = getBit(eventEnabledUncontrollable, index);

            Serial.print("evento  não controlavel[");
            Serial.print(index);
            Serial.print("] = ");
            Serial.println(existEvent);

            if (existEvent)
            {
              setBit(eventOccurred, index, true);
              Serial.print("eventOccurred: ");
              printEvent(eventOccurred);
              executeTransition(eventOccurred);
              setBit(eventUncontrollable, index, false);

              zeroEvent(eventOccurred);
              break;
            }
        }

        zeroEvent(eventEnabledUncontrollable);
        firstEventUncontrollable = (firstEventUncontrollable + 1) % NUMBER_EVENT;
    }
    else
    {

        // Check the enabled events
        oneEvent(eventEnabled);
        for (int i = 0; i < NUMBER_SUPERVISOR; i++)
        {
            actualState = supervisor[i].getActualState();
            bitwiseAnd(eventEnabled, eventEnabled, supervisor[i].getEnabledEvent());
            Serial.print("Supervisor");
            Serial.print(i);
            Serial.print(" : state: ");
            Serial.print(actualState);
            Serial.print(" | events: ");
            printEvent(supervisor[i].getEnabledEvent());
            //bitwiseAnd(eventEnabled, eventEnabled, supervisor[i].getEnabledEvent());
        }

        Serial.println("Avaliando estados habilitados");

        //Serial.print("eventEnabledControllable: ");
        //printEvent(eventEnabledControllable);

        //Serial.print("eventEnabled: ");
        //printEvent(eventEnabled);

        Serial.print("Eventos Controlaveis Habilitados: ");
        printEvent(eventEnabledControllable);
        Serial.print("Eventos Habilitados: ");
        printEvent(eventEnabled);

        //delay(50);

        // Check if any enabled Controllable event was detected
        bitwiseAnd(eventEnabledControllable, eventEnabledControllable, eventEnabled);

        if (!areEqual(eventEnabledControllable, emptyEvent))
        {

            for (int i = 0; i < NUMBER_EVENT; i++)
            {
                int index = (firstEventControllable + i) % NUMBER_EVENT;

                // Get one Controllable Event each time
                bool existEvent = getBit(eventEnabledControllable, index);

                if (existEvent)
                {
                    setBit(eventOccurred, index, true);
                    executeTransition(eventOccurred);
                    setBit(eventControllable, index, false);

                    zeroEvent(eventOccurred);
                    break;
                }
            }

            zeroEvent(eventEnabledControllable);
            firstEventControllable = (firstEventControllable + 1) % NUMBER_EVENT;
        }

        zeroEvent(eventEnabled);
    }

    // Execute the Loop function for each automaton
    for (int i = 0; i < NUMBER_AUTOMATON; i++)
    {
        actualState = automata[i].getActualState();
        Serial.print("Chamando o automato ");
        Serial.print(i);
        Serial.print(" | estado: ");
        Serial.println(actualState);
        automata[i].Loop(actualState);
        Serial.println("Voltou a main");
    }
}

void executeTransition(Event eventOccurred)
{
  Serial.println("|===================|executeTransition|==================|");
  printEvent(eventOccurred);
    // Execute the state transition for each supervisor
    for (int k = 0; k < NUMBER_SUPERVISOR; k++)
    {

      actualState = supervisor[k].getActualState();
      int nextState = supervisor[k].MakeTransition(actualState, eventOccurred);
      supervisor[k].setActualState(nextState);
    }

    // Execute the state transition for each automaton
    for (int j = 0; j < NUMBER_AUTOMATON; j++)
    {
      Serial.print("Autômato ");
      Serial.print(j);
      Serial.print(" | ");
      actualState = automata[j].getActualState();
      Serial.print(actualState);
      int nextState = automata[j].MakeTransition(actualState, eventOccurred);
      Serial.print(" => ");
      Serial.println(nextState);
      automata[j].setActualState(nextState);
    }
}
