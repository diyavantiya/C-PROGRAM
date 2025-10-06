// Odd Fn
#include<stdio.h>
int main(){
int a,c;
int odd(int);
printf("Enter two no:");
scanf("%d", &a);

c=odd(a);
printf("%d",c);

return 0;
}
int odd(int x)
{
    if(x%2==0)
        return 0;
    else
        return 1;
}
