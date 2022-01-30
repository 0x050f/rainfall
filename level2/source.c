#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void p(void *s) {
	void *t;//ebp -0xc
	char *b;//ebp -0x4c

	fflush(stdout);
	gets(b);
	t = s;
	if ((unsigned int)t & 0xb0000000)
	{
		printf("(%p)\n", t);
		exit(1);
	}
	puts(b);
	strdup(b);
}
int main() {
	p(0);
	return 0;
}
