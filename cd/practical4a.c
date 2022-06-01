//regular expression accepting all alphabets
#include<string.h>
#include<stdio.h>
void main()
{
	char a[20];
	int i,k=0,n;
	printf("\n enter a string for accepting alphabets");
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<=n;i++)
	{
		if((a[i]>=97 &&a[i]<=122)||(a[i]>=65&a[i]<=90))
			k=k+1;
		else
			break;
	}
	if(n==k)
		printf("\n string is accepted\n");
	else
		printf("\n string is not accepted\n");
}
/*
 enter a string for accepting alphabetsPrmitr

 string is accept
*/
