#include<stdio.h>
#include<conio.h>
char* encode(char* str)
{
int i=0;
while(str[i]!='\0')
{
str[i]=str[i]-30;
}
return str;
}
void main()
{
char *str;
printf("\n enter the string to be encode");
gets(str);
str=encode(str);
printf("\n encoded string:%s",str);
getch();
}
