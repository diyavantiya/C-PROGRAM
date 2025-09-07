// Convert Farhenheit to celcius 
#include <stdio.h>
int main() {
float farhenheit;
printf("Enter temperature in farhenheit to be converted in celcius:");
   scanf("%f", &farhenheit);
    printf("%f farhenheit = %f celcius ",farhenheit,0.556*(farhenheit-32));
    return 0;
}
