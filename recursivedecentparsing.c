#include<stdio.h>
char input[20];
int i=0;
void main()
{
int n;
display();
printf("\nEnter the input string:");
scanf("%s",input);
E();
printf("\nThe given input string is parsed.");
}
E( )
{
T( );
E1( );
}
E1( )
{
if(input[i]=='+')
{
i++;
T();
E1();
}
}
T( )
{
F( );
T1( );
}
T1( )
{
if(input[i]=='*')
{
i++;
F( );
T1( );
} }
F( )
{
if(input[i]=='(')
{
i++;
E();
if(input[i]==')')
i++;
else error( );
}
else if(input[i]=='i')
i++;
else error( );
}
error( )
{
printf("\nThe given input string is not parsed.");
exit(0);
}
display( )
{
printf("\nGrammar is:");
printf("\nE->TE1\nE1->+TE1/@\nT->FT1\nT1->*FT1/@\nF- >(E)/i");
printf("\nNonTerminals:E,E1,T,T1,F");
printf("\nterminals:+,*,(,),i\nEpsilon symbol- @Start symbol-E\n");
return;}
