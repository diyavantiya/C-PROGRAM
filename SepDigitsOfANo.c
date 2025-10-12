// Separate the digits of a no.
#include <stdio.h>

int main() {
    int n,digits;
    printf("Enter no:");
    scanf("%d", &n);
    printf("The digits of %d are:", n);
while(n>0)
{
         digits=n%10; // get last digit
        printf("%d ", digits);
        n=n/10; // remove last digit
}
    return 0;
}
