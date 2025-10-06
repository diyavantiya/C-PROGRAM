// Function with arguments and prototypes
#include<stdio.h>
void main(){
float a,b,c;
float add(float, float);
printf("Enter two no:");
scanf("%f %f", &a, &b);

c=add(a, b);
printf("Ans = %f",c);

}
float add(float x, float y)
{
return (x+y);
}
