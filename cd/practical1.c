//simulate lexical analyzer for validate operators
#include<stdio.h> 
void main()
{ int i,l;
char
ch;
char a[10]="";
printf("Enter the equation\n"); 
for(l=0;l<10;l++)
{
scanf("%c",&ch);
a[l]=ch;
}
for(i=0;i<10;i++)
{ if(a[i]>=65&&a[i]<=90)
printf("%c is an upper case identifier.\n",a[i]); 
if(a[i]>=97&&a[i]<=122)
printf("%c is a lower case idetifier. \n",a[i]);
if(a[i]>=32&&a[i]<=36||a[i]==39||a[i]==44||a[i]==92||a[i]==124||a[i]==94||a[i]==95||a[i]==96||a[i]==126)
printf("%c is a special symbol-.\n",a[i]); 
if(a[i]>=48&&a[i]<=57)
printf("%c is a constant number. \n",a[i]);
if(a[i]>=60&&a[i]<=63||a[i]==58||a[i]==37||a[i]==38)
printf("%c is logical operator. \n",a[i]);
if(a[i]==40||a[i]==41||a[i]==91||a[i]==93||a[i]==123||a[i]==125) 
printf("%c is paranthesis/brackets. \n",a[i]);
if(a[i]==42||a[i]==43||a[i]>=45&&a[i]<=47)
printf("%c is arithematic operators. \n",a[i]);
}}

/*Enter the equation
(
a
+
5
*
( is paranthesis/brackets.
a is a lower case idetifier.
+ is arithematic operators.
5 is a constant number.
* is arithematic operators.
*/
