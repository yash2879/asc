// implement recursive descent parser
#include<stdio.h>
#include<string.h>

void E(),E1(),T(),T1(),F();
int ip=0;
static char s[10]; 

int main()
{
char k; int l;
ip=0;
printf("Enter the string:"); 
scanf("%s",s);
printf("The string is:%s",s); 
E();
if(s[ip]=='$')
printf("\nString is accepted.\nThe length of the string is%d\n",strlen(s)-1); 
else
printf("\n string notaccepted"); 
return 0;
}
void E()
{
T();
E1();
return;
}
void E1()
{ if(s[ip]=='+')
{ ip++;
T();
E1();
}
return;
}
void T()
{
F();
T1();
return;
}
void T1()
{ if(s[ip]=='*')
{ ip++;
F();
T1();
}
return;
}
void F()
{ if(s[ip]=='(')
{ ip++;
E();
if(s[ip]==')')
{ ip++;
}}
else
if(s[ip]=='i')
ip++;
else
printf("\n Id accepted"); 
return;
}
/*
Enter the string:(i+i*i)$
The string is:(i+i*i)$
String is accepted.
The length of the string is7
*/
