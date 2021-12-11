#include <stdio.h>
#include <stdlib.h>

int main()
{
float z1, z2;
float a;
printf("Argument: ");
scanf("%f", &a);

z1=(sin(2*a)+sin(5*a)-sin(3*a))/(cos(a)+1-2*sin(2*a)*sin(2*a));

z2=2*sin(a);

printf("z1 and z2: ");
printf("%f %f", z1, z2);

}
