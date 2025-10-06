// Function with argument and no return value

#include<stdio.h>
void main(){
int a,b;
void add(int, int);
printf("\n Enter two no:");
scanf("%d %d", &a, &b);
add(a,b);
getch();
}
void add(int x, int y)
{
int z;
z=x+y;
printf("Answer =%d", z);
}
