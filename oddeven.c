/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

void checkOddEven(int N) {
  
    // Find the remainder
    int r = N % 2;

    // Condition for even
    if (r == 0)  {
        printf("Even");
    }
  
    // Condition for odd number
    else  {
        printf("Odd");
    }
}

int main() {
    int N = 101;
    checkOddEven(N);
    return 0;
}