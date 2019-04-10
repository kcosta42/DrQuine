#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define CC "gcc -Wall -Wextra -Werror"

int main()
{
	int i = 5;
	char *file;
	char *cfile;
	char *cmd;
	FILE *fs;

	if (access("Sully_5.c", R_OK)) { i++; };
	if (i <= 0) { return (1); }

	asprintf(&file, "Sully_%d", i - 1);
	asprintf(&cfile, "Sully_%d.c", i - 1);

	char *c = "#include <stdio.h>%1$c#include <stdlib.h>%1$c#include <string.h>%1$c#include <unistd.h>%1$c#define CC %2$cgcc -Wall -Wextra -Werror%2$c%1$c%1$cint main()%1$c{%1$c%3$cint i = %4$i;%1$c%3$cchar *file;%1$c%3$cchar *cfile;%1$c%3$cchar *cmd;%1$c%3$cFILE *fs;%1$c%1$c%3$cif (access(%2$cSully_5.c%2$c, R_OK)) { i++; };%1$c%3$cif (i <= 0) { return (1); }%1$c%1$c%3$casprintf(&file, %2$cSully_%%d%2$c, i - 1);%1$c%3$casprintf(&cfile, %2$cSully_%%d.c%2$c, i - 1);%1$c%1$c%3$cchar *c = %2$c%5$s%2$c;%1$c%3$cfs = fopen(cfile, %2$cw%2$c);%1$c%3$cfprintf(fs, c, 10, 34, 9, i - 1, c);%1$c%3$cfclose(fs);%1$c%1$c%3$casprintf(&cmd, %2$c%%s %%s -o %%s%2$c, CC, cfile, file);%1$c%3$csystem(cmd);%1$c%3$cfree(cmd);%1$c%3$cfree(cfile);%1$c%1$c%3$casprintf(&cmd, %2$c./%%s%2$c, file);%1$c%3$csystem(cmd);%1$c%3$cfree(cmd);%1$c%3$cfree(file);%1$c%1$c%3$creturn (0);%1$c}%1$c";
	fs = fopen(cfile, "w");
	fprintf(fs, c, 10, 34, 9, i - 1, c);
	fclose(fs);

	asprintf(&cmd, "%s %s -o %s", CC, cfile, file);
	system(cmd);
	free(cmd);
	free(cfile);

	asprintf(&cmd, "./%s", file);
	system(cmd);
	free(cmd);
	free(file);

	return (0);
}
