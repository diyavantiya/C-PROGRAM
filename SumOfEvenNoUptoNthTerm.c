// Sum of all even numbers upto nth term 
#include <stdio.h>

int main() {
 int n, sum=0;
 printf("Enter a number:");
 scanf("%d", &n);
 for(int i=1; i<=n; i++){
     sum=sum+2*i;
 }
 printf("Sum of even number till %dth term is %d.", n, sum);
 
    return 0;
}
