#include <stdio.h>

/* Write a program to print a histogram of lengths of words in its input.
It is easy to draw the histogram with the bars horizontal; 
a vertical orientation is more challenging. */

#define IN 1 	// inside a word
#define OUT 0	// outside a word

void main()
{
	int c, state, length, i;
	int word[], length[]; //for vertical
	
	state = OUT;
	length = 0;

	// Horizontal
	while ((c = getchar()) != EOF)
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == IN) {
				putchar('\t');
				for (i = 0; i < length; ++i)
					putchar('-');
				putchar('\n');
			}
			state = OUT;
			length = 0;
		}		
		else {
			++length;
			putchar(c);
			state = IN;
		}

	// Vertical
	while ((c = getchar()) != EOF)
}
