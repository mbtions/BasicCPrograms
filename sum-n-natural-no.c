#include <stdio.h>

int main()
{
    int n, i, sum;
    printf("ENTER NO.: ");
    scanf("%d", &n);
    
    for (i=1; i<=n; i++) {
        sum = sum+i;
        printf("\n%d",i);
    }
    printf("\n\nSUM: %d",sum);
    return 0;
}
