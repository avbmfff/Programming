#include <stdio.h>
#include "figure.h"
//

int main()
{
    struct figure circle;

    printf("x0 = ");
    scanf("%f", &circle.x);
    printf("y0 = ");
    scanf("%f", &circle.y);
    printf("r = ");
    scanf("%f", &circle.r);

    printf("Line is: %f \n", line(&circle));
    printf("Square is: %f \n", square(&circle));
}
