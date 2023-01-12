#include <stdio.h>
#include <stdlib.h>

float suma ( float* A, int N);
int main()
{
    int N;
    float sum;
    int i;
    printf("Enter size of array \n>");
    scanf("%d", &N);
    float A[N];

    for (i = 0; i<N; i++)
    {
        printf("Enter a[%d] = ", i);
        scanf("%f", &A[i]);
    }
    sum = suma ( &A[0], N );

    for (i = 0; i<N; i++)
        printf("%g ", A[i]);
    printf("\n\nSum A = %g\n", sum);

    return 0;
}

float suma ( float *A, int N)
{
    float S;
    int j;
    S = 0;
    for(j=0; j<N; j++)
        S += A[j];
    return S;
}
