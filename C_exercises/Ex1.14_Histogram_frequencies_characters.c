#include <stdio.h>

/* Write a program to print a histogram of the frequencies
of different characters in its input */

void main()
{
	int c, freq[20], ch[20], count, i, j;
	
	count = 0;

	while ((c = getchar()) != EOF) {
		if (count > 0) {
			for (i = 0; i < count; ++i)
				if (ch[i] == c) {
					++freq[i];
					i = count;
				}
			if (i = count) {
				ch[i] = c;
				freq[i] = 1;
				++count;
			}
		}
		else {
			ch[0] = c;
			freq[0] = 1;
			++count;
		}
	}

	for (i = 0; i < count; ++i) {
		putchar(ch[i]);
		for (j = 0; j < freq[i]; ++j)
			putchar('-');
		putchar('\n');
	}
}
