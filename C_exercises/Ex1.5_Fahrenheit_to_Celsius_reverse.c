#include <stdio.h>

// Fahrenheit - Celsius table; updated version
#define LOWER 0
#define UPPER 300
#define STEP 20

void main()
{
	int fahr;
	printf("F to C\n");
	for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
