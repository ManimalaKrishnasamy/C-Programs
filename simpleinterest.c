/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
  
    // Input values
    float P = 10000, R = 1, T = 1;

    // Calculate simple interest
    float SI = (P * T * R) / 100;

    // Print Simple Interest
    printf("Simple Interest = %f\n", SI);

    return 0;
}