#ifndef H_SLLIST
#define H_SLLIST
#include "bool.h"


// single linked list element
typedef struct _IntElement {
	int value;
	struct _IntElement* next;
} IntElement;

void printIntList(IntElement **head);
void cleanIntList(IntElement **head);
void pushInt(IntElement **head, int value);
int getInt(IntElement **head, unsigned int index);
void popInt(IntElement **head, unsigned int index);
void sortIntOut(IntElement **head, Bool(*toBeRemoved)(int));


#endif