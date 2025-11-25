#include <stdio.h>
#define PI 3.14
int main()
{
	/*float radius,area;
	printf("enter radius of circle (in cm):");
	scanf("%f",&radius);
	area = PI*radius*radius;
	printf("Area of Circle = %.2f cm\n",area);*/
	float l,w,area;
	printf("enter l,w of rectangle(in cm):");
	scanf("%f%f,&l,&w");
	area = l*w;
	printf("Area of Rectangle = %.3f cm\n",area);
	return 0;
}
