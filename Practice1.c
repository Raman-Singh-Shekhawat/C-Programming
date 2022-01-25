//Calculate the volume of a cylinder given its radius and height.

#include<stdio.h>

int main()
{
int r, height;
float a;

printf("\nEnter the radius of the cylinder: ");

scanf("%d", &r);

printf("\nEnter the height of the cylinder: ");

scanf("%d", &height);

a=3.14*r*r*height;


printf("\nThe volume of the given cylinder is: %.2f cubic units\n", a);

return 0;
}