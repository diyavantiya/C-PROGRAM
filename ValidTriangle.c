// To see if it is a valid triangle 
#include<stdio.h>
int main() {
int a,b,c;
printf("Enter length of side 1 of triangle:");
scanf("%d", &a);
printf("Enter length of side 2 of triangle:");
scanf("%d", &b);
printf("Enter length of side 3 of triangle:");
scanf("%d", &c);
if(a+b>c &&
   b+c>a &&
   c+a>b) {
printf("It is a valid triangle");
}
else {
printf("It is not a valid triangle");
}
return 0;
}
