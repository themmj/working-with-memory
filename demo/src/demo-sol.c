#include "common.h"
#include "wrapper.h"
#include "json.h"
#include "slList.h"


void pointerDemo()
{
	int i = 10;
	int *p = &i;

	printf("Address of i: %p, value of p: %p\n", &i, p);

	*p = 25;
	printf("Value of i: %d\n", i);
}

void arrayDemo() 
{
	const int arraySize = 10;

	//allocate enough space
	int* arr = (int*)malloc(sizeof(int) * arraySize);

	// fill array with pointer arithmetic
	for (int i = 0; i < arraySize; ++i) {
		*(arr + i) = i;
	}

	// print with indexing
	for (int i = 0; i < arraySize; ++i) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	//important cleanup
	free(arr);
}

void unionDemo()
{
	JsonValue json = createJsonValue();
	setBoolValue(&json, True);
	if (json.type == Boolean && json.val.boolean) {
		setStringValue(&json, "This is a test");
	}
	// should print This is a test
	printf("%s\n", json.val.string);
}

Bool isEven(int i) {
	return ++i % 2;
}

void listDemo() 
{
	IntElement *start = NULL;
	// fill list
	for (int i = 0; i < 10; ++i) {
		pushInt(&start, i);
	}
	printIntList(&start);

	// remove list[4]
	popInt(&start, 4);
	printIntList(&start);

	// removing even numbers
	sortIntOut(&start, &isEven);
	printIntList(&start);

	// important clean up
	cleanIntList(&start);
	printIntList(&start);
}

int main(int argc, char **argv)
{
	wrap(&pointerDemo, "Pointer Demo");
	wrap(&arrayDemo, "Array Demo");
	wrap(&unionDemo, "Union Demo");
	wrap(&listDemo, "List Demo");
	return 0;
}
