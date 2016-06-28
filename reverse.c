#include<stdio.h>
#include<string.h>
int main()
{char p;
char str[100]="p";
int i,j=0;
printf("\n enter the string");
gets(str);
i=0;j=strlen(str)-1;
while(i<j)
{
    p=str[i];
    str[i]=str[j];
str[j]=p;
i++;
j--;
}
printf("\n reverse of string is %s",str);
return 0;
}
