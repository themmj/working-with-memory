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
	IntElement **tracer = head;
	IntElement *temp;
	while (*tracer) {
		temp = *tracer;
		*tracer = (*tracer)->next;
		free(temp);
	}
}

void pushInt(IntElement **head, int value)
{
	IntElement *newp = (IntElement*) malloc(sizeof(IntElement));
	newp->value = value;
	newp->next = *head;
	*head = newp;
}

int getInt(IntElement **head, unsigned int index)
{
	IntElement **tracer = head;
	unsigned int i = 0;
	while (*tracer) {
		if (i == index) {
			return (*tracer)->value;
		}
		tracer = &(*tracer)->next;
		++i;
	}
	return 0;
}

void popInt(IntElement **head, unsigned int index)
{
	IntElement **tracer = head;
	IntElement *temp;
	unsigned int i = 0;
	while (*tracer) {
		if (i == index) {
			temp = *tracer;
			*tracer = (*tracer)->next;
			free(temp);
			return;
		}
		tracer = &(*tracer)->next;
		++i;
	}
}

void sortIntOut(IntElement **head, Bool(*toBeRemoved)(int))
{
	IntElement **tracer = head;
	IntElement *temp;

	while (*tracer) {
		if (toBeRemoved((*tracer)->value)) {
			temp = *tracer;
			*tracer = (*tracer)->next;
			free(temp);
		}
		else {
			tracer = &(*tracer)->next;
		}
	}
}
