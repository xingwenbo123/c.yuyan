#include <stdio.h>
int main()
{
	float a, b, c;
	printf("Please enter two numbers: ");
	scanf("%f %f",& a, &b);
	c = a > b ? a : b;
	printf("The larger number is: %f\n", c);
	return 0;
}
