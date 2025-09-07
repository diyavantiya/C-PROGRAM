//Calculate Net Salary
#include <stdio.h>
int main() {
float g;
printf("Enter gross salary :");
   scanf("%f", &g);
    printf("The net salary is %f\n",g+(0.1*g)+(0.03*g));
    return 0;
}
