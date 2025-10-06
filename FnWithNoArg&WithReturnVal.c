// Function with no arguments/ with return value
#include<stdio.h>
void main(){
int a,b;
void swap(int, int);
printf("\n Enter two no:");
scanf("%d %d", &a, &b);
swap(a,b);

}
void swap(int x, int y)
{
int z;
z=x;
x=y;
y=z;
printf("Swapped values are of %d is %d",x, y);
}
