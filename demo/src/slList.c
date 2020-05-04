#include "slList.h"
#include "common.h"

void printIntList(IntElement **head)
{
	IntElement **tracer = head;
	while (*tracer) {
		printf("%d ", (*tracer)->value);
		tracer = &(*tracer)->next;
	}
	printf("\n");
}

void cleanIntList(IntElement **head)
{

}

void pushInt(IntElement **head, int value)
{

}

int getInt(IntElement **head, unsigned int index)
{
	return 0;
}

void popInt(IntElement **head, unsigned int index)
{

}

void sortIntOut(IntElement **head, Bool(*toBeRemoved)(int))
{

}
