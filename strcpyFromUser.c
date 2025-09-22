// Make strcpy by your own with accepting string from user
#include<stdio.h>
#include<conio.h>
int main()
{
char s[50], t[50];
int i=0;
gets(s);
while(s[i]!='\0')
{
t[i]=s[i];
i++;
}
t[i]='\0';
printf("%s %s\n",s,t);
return 0;
}
