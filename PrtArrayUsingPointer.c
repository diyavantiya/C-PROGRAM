// Print array using pointers
#include<stdio.h>
int main()
{
int a[5], *p, i;
p=a;
printf("Enter 5 values:");
for(i=0; i<5; i++){
scanf("%d", p);
p++;
}
printf("Now, printing all values of array a\n");
printf("using pointer variable p\n");
p=a;
for(i=0; i<5; i++){
printf("%d", *p);
p++;
}
return 0;
}
