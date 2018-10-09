#include <stdio.h>

// Celsius to Fahrenheit -- Updated version
#define LOWER 0
#define UPPER 300
#define STEP 20

void main()
{
	int fahr, celsius;
	
	printf("C to F\n");
	celsius = LOWER;
	while (celsius <= UPPER){
		fahr = (celsius*9)/5 + 32;
		printf("%3d %4d\n", celsius, fahr);
		celsius += STEP;
	}
}
