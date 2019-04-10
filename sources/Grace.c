#include <stdio.h>

#define GRACE int main(void) { FILE *fs=fopen(NAME, "w"); fprintf(fs, CHAR, 10, 34, CHAR, 9); fclose(fs); return (0); }
#define NAME "Grace_kid.c"
#define CHAR "#include <stdio.h>%1$c%1$c#define GRACE int main(void) { FILE *fs=fopen(NAME, %2$cw%2$c); fprintf(fs, CHAR, 10, 34, CHAR, 9); fclose(fs); return (0); }%1$c#define NAME %2$cGrace_kid.c%2$c%1$c#define CHAR %2$c%3$s%2$c%1$c/*%1$c%4$cLet's the hack begin%1$c*/%1$cGRACE%1$c"
/*
	Let's the hack begin
*/
GRACE
