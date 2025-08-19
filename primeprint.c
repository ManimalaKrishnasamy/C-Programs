#include <stdbool.h>
#include <stdio.h>
#include <math.h>

isprime(int n)
{
    if((n==0)||(n==1))
    return false;
    int i;
    for (i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
int N;
printf("enter the range upto which prime is required:");
scanf("%d",&N);
int i;
for (i=0;i<=N;i++)
{
if(isprime(i))
{
    printf("%d \t",i);
}
}
}