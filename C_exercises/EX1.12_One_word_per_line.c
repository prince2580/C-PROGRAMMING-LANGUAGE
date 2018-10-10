#include <stdio.h>

// Write a program that prints its input one word per line

#define IN 1 	// inspace (blank. tab, or newline)
#define OUT 0	// outspace

void main()
{
	int c, state;

	state = IN;
	while ((c = getchar()) != EOF)
		if (c != ' ' && c != '\t' && c != '\n') {
			putchar(c);
			state = OUT;
		}			
		else if (state == OUT) {
			putchar('\n');
			state = IN; 
		}	 
}
