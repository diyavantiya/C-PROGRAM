//Calculate Simple Interest
#include <stdio.h>
int main() {
float p,r,t;
printf("Enter Principal Amount:");
   scanf("%f", &p);
   printf("Enter rate:");
   scanf("%f", &r);
   printf("Enter time:");
   scanf("%f", &t);
    printf("The Principal Interest is %f", p*r*t/100);
    return 0;
}
