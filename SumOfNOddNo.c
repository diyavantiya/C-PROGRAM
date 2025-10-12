// Print sum of n odd no
#include <stdio.h>

int main() {
    int i, n, sum;
    printf("Enter no:");
    scanf("%d", &n);
    sum=0;
for(i=1; i<=n; i++)
{
         sum=sum+(2*i-1);
}
printf("The sum is %d",sum);
    return 0;
}
