//Calculate Area and Perimeter of Rectangle
#include <stdio.h>
int main() {
float a,b;
printf("Enter length and breadth of Rectangle to calculate perimeter and area:");
   scanf("%f %f", &a, &b);
    printf("The area of rectangle is %f\n",a*b);
     printf("The perimeter of rectangle is %f",2*(a+b));
    return 0;
}
