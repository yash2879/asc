//check parenthesis
#include<stdio.h>
#include<string.h>
void main()
{
	char a[5];
	int i,j=0,k=0;
	printf(" \nEnter the string");
	for(i=0;i<5;i++)
		scanf("%c", &a[i]);
	for(i=0;i<5;i++)
	{
		if(a[i]==40)
			j+=j+1;
		if(a[i]==41)
			k=k+1;
	}
	if(j==k)
		printf("\n parenthesis of string is balanced \n");
	if(j>k || j<k)
		printf("\n parenthesis of string is not balanced\n");

}
/*
Enter the string(a+b)

 parenthesis of string is balanced
 
 
 Enter the string(a+(a+b)

 parenthesis of string is not balanced

*/
