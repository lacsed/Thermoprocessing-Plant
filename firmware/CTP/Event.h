

#ifndef EVENT_H
#define EVENT_H

#include <Arduino.h>
#include <stdint.h>

#define NUMBER_EVENT 14
#define SIZE_EVENT 2

struct Event
{
    uint8_t data[SIZE_EVENT];
};

Event createEvent();
Event createEventFromData(uint8_t *data);
void copyEvent(const Event source, Event &destination);

void setBit(Event &event, int position, bool value);
bool getBit(const Event event, int position);

void bitwiseAnd(Event &result, const Event &event1, const Event &event2);
void bitwiseOr(Event &result, const Event &event1, const Event &event2);
void bitwiseXor(Event &result, const Event &event1, const Event &event2);
void bitwiseNot(Event &result, const Event &event);

bool areEqual(const Event &event1, const Event &event2);

void zeroEvent(Event &event);
void oneEvent(Event &event);

void printEvent(const Event event);

#define EVENT_B1 13
#define EVENT_A1 12
#define EVENT_B2 11
#define EVENT_A2 10
#define EVENT_BMAG 9
#define EVENT_BNAOMAG 8
#define EVENT_B3 7
#define EVENT_A3 6
#define EVENT_BE 5
#define EVENT_BD 4
#define EVENT_AE 3
#define EVENT_AD 2
#define EVENT_B0 1
#define EVENT_A0 0


#endif