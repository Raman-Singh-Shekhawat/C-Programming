// Calculate the area of a circle.

#include<stdio.h>
int main()
{
int r;
float pi=3.14, a;

printf("\nEnter the radius of the circle: ");
scanf("%d", &r);

a=pi*r*r;
printf("\nThe area of the circle is: %f square units\n", a);

return 0;
}


