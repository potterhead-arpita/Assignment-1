#include <stdio.h>
int main()
{
	float c,f;
	printf("Enter the temperature in celcius");
	scanf("%f",& c);
	f=(c*1.8)+32;
	printf("temperature in fahrenheit: %f", f);
	return 0;
}
