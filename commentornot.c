#include<stdio.h>
#include<conio.h>
Void main ()
{
char com[30];
int i=2,a=0;
clrscr();
printf("\n Enter comment”);
gets(com);
if(com[0]=='/')
{
if(com[1]=='/')
printf("\n It is a comment");
else if(com[1]=='*')
{
for(i=2;i<=30;i++)
{
if(com[i]=='*'&&com[i+1]=='/')
{
printf("\n It is a comment");
a=1;
break;
}
Else
continue;
}
if(a==0)printf("\n It is not a comment");
}
Else
printf("\n It is not a comment");
}
Else
printf("\n It is not a comment");
getch();
}
