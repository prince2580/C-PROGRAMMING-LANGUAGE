#include <stdio.h>

/* Write a program to copy its input to its output,
replacing each tab by \t, each backspace by \b,
and each backslash by \\ */

void main()
{
	int c;
	
	while ((c = getchar()) != EOF)
		if (c == '\t') {
			putchar('\\');
			putchar('t');
		}
		else if (c == '\b') {
			putchar('\\');
			putchar('b');
		}
		else if (c == '\\') {
			putchar(c);
			putchar(c);
		}
		else
			putchar(c);
}
