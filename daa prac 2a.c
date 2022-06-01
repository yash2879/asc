//linear search
#include<stdio.h>
int linear(int[],int,int);
void main()
{
int a[20],
pos=-1,n,k,i;
//clrscr();
printf("\n Enter the n value:");
scanf("%d",&n);
printf("\n Enter the elements for an array:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n Enter the element to be searched:");
scanf("%d",&k);
pos=linear(a,n,k);

if(pos!=-1)
printf("\n search successful element found at position:%d",pos);
else 
printf("\n enter element not found:");
}

int linear (int a[],int n,int k)
{
int i;
for(i=0;i<n;i++)
{
if(a[i]==k)
return (i);
}
return -1;
}




