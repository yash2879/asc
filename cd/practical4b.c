//regular expretion accepting  digits and special symbols
#include<string.h>
#include<stdio.h>
int check(char s, int low, int high)
{
	if(s<low || s>high)
		return 0;
	else
		return 1;
}
void main()
{
	char r[20];
	int i=0;
	int val=0;
	printf("\n enter a string");
	scanf("%s",r);
	for(i=0;i<strlen(r);i++)
	{
		(val=check(r[i],48,57)||check(r[i],33,47)|| check(r[i], 123, 126));
		if(val==0)
			break;
	}
	if(val==1)
		printf("\n string is accepted\n");
	else
		printf("\n string is not accepted \n");
}
/*
 enter a string12334$

 string is accepted
*/
