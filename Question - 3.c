#include <stdio.h>
int main()
{
	float r,d,c,a;
	printf("Enter the radius of the circle\n");
	scanf("%f", &r);
	d=r*2;
	c=2*3.141*r;
	a=3.141*r*r;
	printf("diameter : %.2f\n", d);
	printf("circumference : %.2f\n", c);
	printf("area : %.2f\n", a);
	return 0;
}
