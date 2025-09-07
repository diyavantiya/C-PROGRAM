//Swap Two Values
#include<stdio.h>
int main() {
int a,b,c;
printf("Enter value 1 :");
   scanf("%d", &a);
   printf("Enter value 2 :");
   scanf("%d", &b);
   c=a;
   a=b;
   b=c;
    printf("The swapped value for a is %d\n",a);
    printf("The swapped value for b is %d\n",b,a);
    return 0;
}
