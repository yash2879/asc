//string has even or odd no. of 0 and 1
#include<stdio.h>
void main()
{
    int i,l,len;
    char ch;
    int ct = 0;
    int k = 0;
    char a[10]="";
    printf("Enter the length of string \n");
    scanf("%d",&len);
    printf("Enter a string of length of %d \n",len);
    for(l=0;l<len;l++)
    {
        scanf("%c",&ch);
        a[l]=ch;
    }
    for(i=0;i<len;i++)
    {
        if(a[i]=='1')
        {
            ct++;
        }
    }
    if(ct%2==0)
    {
        printf("String has even number of 1's = %d \n",ct);
    }
    else
    {
        printf("String has odd number of 1's = %d \n",ct);
    }
    k = len-ct;
    if(k%2==0)
    {
        printf("String has even number of 0's = %d \n",k);
    }
    else
    {
        printf("String has even number of 0's = %d \n",k);
    }
}
/*
Enter the length of string
5
Enter a string of length of 5
11100
String has odd number of 1's = 3
String has even number of 0's = 2
*/
