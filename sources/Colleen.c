#include <stdio.h>
/*
	Useless Function
*/
void func(void) {}

int main(void)
{
	/*
		Main Function
	*/
	char *c = "#include <stdio.h>%1$c/*%1$c%2$cUseless Function%1$c*/%1$cvoid func(void) {}%1$c%1$cint main(void)%1$c{%1$c%2$c/*%1$c%2$c%2$cMain Function%1$c%2$c*/%1$c%2$cchar *c = %3$c%s%3$c;%1$c%2$cfunc();%1$c%2$cprintf(c, 10, 9, 34, c);%1$c%2$creturn (0);%1$c}%1$c";
	func();
	printf(c, 10, 9, 34, c);
	return (0);
}
