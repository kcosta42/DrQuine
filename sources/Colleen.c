#include <stdio.h>

// Useless Function
void func(void) {}

int main(void)
{
	// Main Function
	char *c="#include <stdio.h>%c%c// Useless Function%cvoid func(void) {}%c%cint main(void)%c{%c%c// Main Function%c%cchar *c=%c%s%c;%c%cfunc();%c%cprintf(c,10,10,10,10,10,10,10,9,10,9,34,c,34,10,9,10,9,10,9,10,10);%c%creturn (0);%c}%c";
	func();
	printf(c,10,10,10,10,10,10,10,9,10,9,34,c,34,10,9,10,9,10,9,10,10);
	return (0);
}
