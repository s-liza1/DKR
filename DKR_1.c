#include <stdio.h>
#include <stdlib.h>

int factorial(int);
double power(int, int);

int main()
{
    double S=0;
    int N;

    printf("Enter N\n>");
    do
    {
        if(N<0) printf("Error: N<0\nEnter N again\n>");
        scanf("%d", &N);
    }
    while(N<0);
    for(int n=0; n<=N; n++)
        S += power (-1, n) * power (2, n) / factorial (n);
    printf("\nSum = %g\n", S);
    return 0;
}

int factorial(int N)
{
    int value = 1;
    for(int i = 2; i <= N; i++)
        value *= i;
    return value;
}

double power(int a, int N)
{
    double value=1;
    if(N==0)
        return 1;
    else if (N==1)
        return a;
    for(int i=0; i<N; i++)
        value*=a;
    return value;
}
