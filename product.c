#include<stdio.h>

int main()
{
    float a, b;
    float pro = 0;   // use consistent variable name

    printf("Enter a and b: ");
    scanf("%f %f", &a, &b);

    pro = a * b;
    printf("The product is: %f\n", pro);

    return 0;
}