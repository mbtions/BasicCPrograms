#include <stdio.h>

int main()
{
    int n, j, i, sum;
    printf("ENTER NO.: ");
    scanf("%d", &n);
    
    for (i=1; i<=10; i++) 
    {
        printf("\n%d x %d = %d", n, i, n*i);
    }
    return 0;
}
