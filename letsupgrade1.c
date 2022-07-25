#include <stdio.h>

void main()
{
    int i, j, k, n;
    printf("Input number of rows for this pattern :");
    scanf("%d", &n);
    k = n-1;
    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= n - i; j++){
            printf("  ");}
            k = k-1;
        for (j = 1; j <= 2 * i - 1; j++)
            printf("* ");
        printf("\n");
    }
}
