// Separate the digits of a no.
#include <stdio.h>

int main() {
    int n,digits,orignum,i=0;
    printf("Enter no:");
    scanf("%d", &n);
    printf("The digits of %d are:", n);
    orignum=n;
    while(orignum>0) {
        digits=orignum%10; // get last digit
        printf("%d ", digits);
        orignum=orignum/10; // remove last digit
        i++;
    }
    printf("The no of digits are %d", i);
    return 0;
}
