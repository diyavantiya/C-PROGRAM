// Make strcpy by own
#include<stdio.h>
int main()
{
char s[50]="PDEU", t[50];
int i=0;
while(s[i]!='\0')
{
t[i]=s[i];
i++;
}
t[i]='\0';
printf("%s %s\n",s,t);
return 0;
}
