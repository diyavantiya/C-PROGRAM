// Accept 5 values and arrange in ascending order with array

#include<stdio.h>
int main() {
int a[5],c;
printf("Enter 5 values:");

for(int i=0; i<5; i++)
    scanf("%d", &a[i]);

    printf("\nOriginal array:");

    for(int i=0; i<5; i++)
    printf("%d  ", a[i]);

for(int i=0; i<4; i++)
    for(int j=i+1;j<5; j++)
    if(a[i]>a[j])
        {
    c=a[i];
    a[i]=a[j];
    a[j]=c;
    }

    printf("The ascending order is:");
    for(int i=0; i<5; i++){
        printf("%d\n", a[i]);}
return 0;
}
