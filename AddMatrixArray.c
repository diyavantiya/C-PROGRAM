// Add two 2D array of same size and store the result in 3rd one

#include<stdio.h>
int main() {
int a[2][2],b[2][2],c[2][2],i,j;

printf("Enter values of 1st 2x2 Array:");

for(i=0; i<2; i++)
   for(j=0; j<2; j++)
    scanf("%d", &a[i][j]);

printf("Enter values of 2nd 2x2 Array:");

for(i=0; i<2; i++)
   for(j=0; j<2; j++) {
    scanf("%d", &b[i][j]);
    c[i][j]=a[i][j] +b[i][j];
   }

    printf("1st matrix\n");
    for(i=0; i<2; i++){
   for(j=0; j<2; j++)
    printf("%d", a[i][j]);
    printf("\n");
   }

    printf("2nd matrix\n");
    for(i=0; i<2; i++){
   for(j=0; j<2; j++)
    printf("%d", b[i][j]);
    printf("\n");
   }
     printf("Result matrix\n");
    for(i=0; i<2; i++){
   for(j=0; j<2; j++)
    printf("%d", c[i][j]);
     printf("\n");
   }
return 0;
}
