#include <stdio.h>

// Verify that the expression getchar() != EOF is 0 or 1

void main()
{
	if ((getchar() != EOF) == 1)
		printf("1");
}
