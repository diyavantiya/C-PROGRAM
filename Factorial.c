// Print factorial of a given number 
#include<stdio.h>
int main() {
int n;
int fact=1;
printf("Enter number till what you want to print: ");
scanf("%d",&n);
for(int i=1; i<=n; i++) {
fact=fact*i;
}
printf("The factorial of n number is %d\n", fact);
return 0;
}
