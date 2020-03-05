#include <stdio.h>

int main(void)
{
	short largeShort = 32760;
	largeShort = largeShort + 12345;
	printf("largeShort: %d\n", largeShort);

	int numerator = 19, denominator = 5, result;
	result = numerator/denominator;
	printf("result: %d\n", result);

	float e = 2.718281828f;
	e++;//->print e
	e--;
	printf("e: %f\n", e);

	return 0;
}
