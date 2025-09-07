//Calculate Net Sales
#include <stdio.h>
int main() {
float g;
printf("Enter gross sales :");
   scanf("%f", &g);
    printf("The net sales is %f\n",g-(0.1*g));
    return 0;
}
