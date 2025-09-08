// Print 5 values with array

#include<stdio.h>
int main() {
int a[5];
printf("Enter 5 values:");

for(int i=0; i<5; i++) 
    scanf("%d", &a[i]);
    printf("Values are ");

    for(int i=0; i<5; i++) 
    printf("%d\n", a[i]);
return 0;
}
