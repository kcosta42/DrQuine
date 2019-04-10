#include <stdio.h>

#define GRACE int main(void) { FILE *fs=fopen(NAME, "w"); fprintf(fs,CHAR,10,10,34,34,10,34,34,10,34,CHAR,34,10,10,10,10); fclose(fs); return (0); }
#define NAME "Grace_kid.c"
#define CHAR "#include <stdio.h>%c%c#define GRACE int main(void) { FILE *fs=fopen(NAME, %cw%c); fprintf(fs,CHAR,10,10,34,34,10,34,34,10,34,CHAR,34,10,10,10,10); fclose(fs); return (0); }%c#define NAME %cGrace_kid.c%c%c#define CHAR %c%s%c%c%c// Let's the hack begin%cGRACE%c"

// Let's the hack begin
GRACE
