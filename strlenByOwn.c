// Find string length by own
#include<stdio.h>
#include<conio.h>
int main()
{
char s[50];
int i=0;
gets(s);
while(s[i]!='\0')
{
i++;
}
printf("The length of the string is %d",i);
return 0;
}
