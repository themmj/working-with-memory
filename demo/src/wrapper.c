#include "wrapper.h"
#include "common.h"

void wrap(void(*func)(), const char* const name)
{
printf("--Begin of %s--\n", name);
func();
printf("--End of %s--\n", name);
}
