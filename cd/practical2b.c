//program that accept  all keywords
#include<stdio.h>
#include<string.h>

void main()
{
    int i,l;
    char b[20];
    char* a[]={"for","if","do","else","switch","break","continue","goto","while","int","float",
                "double","char","case","return","static","long","void","constant","auto","default",
                "delete","new","enum","register","short","typedef","sizeof","signed","unsigned",
                "volatile","extern"};
    printf("Enter the string \n");
    scanf("%s",b);
    for(i=0;i<19;i++)
    {
        l = strcmp(a[i],b);
        if(l==0)
        {
            break;
        }
    }
    if(l==0)
    {
        printf("\nit is a keyword... ");
    }
    else
    {
        printf("\nit is not a keyword... ");
    }
}
/*
Enter the string
if

it is a keyword...
*/
