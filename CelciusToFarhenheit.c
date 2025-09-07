// Convert celcius to Farhenheit 
#include <stdio.h>
int main() {
float celcius;
printf("Enter temperature in celcius to be converted in Farhenheit:");
   scanf("%f", &celcius);
    printf("%f celcius = %f farhenheit ",celcius,(9/5*celcius)+32);
    return 0;
}
