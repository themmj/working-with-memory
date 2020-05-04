#include "common.h"
#include "wrapper.h"
#include "json.h"
#include "slList.h"

void pointerDemo()
{
	
}

void arrayDemo() 
{

}

void unionDemo()
{

}

void listDemo() 
{

}

int main(int argc, char **argv)
{
	wrap(&pointerDemo, "Pointer Demo");
	wrap(&arrayDemo, "Array Demo");
	wrap(&unionDemo, "Union Demo");
	wrap(&listDemo, "List Demo");
	return 0;
}
