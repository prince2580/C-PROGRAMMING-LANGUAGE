#include <stdio.h>

/* Write a program to copy its input to its output,
replacing each string of one or more blanks by a single blank */

void main()
{
	int blank, c;
	
	blank = 0; //0 if not in blank series
	while ((c = getchar()) != EOF)
		if ((c == ' ') || (c == '\t')) {
			if (blank == 0)
				putchar (' ');
			blank = 1; // 1 if in blank series
		}
		else {
			blank = 0;
			putchar(c);
		}
}

