//binary search
#include<stdio.h>
#include<stdlib.h>


void main()
{
int a[25],i,j,temp,s,n,low,mid,high;
printf("\n Enter the limit:");
scanf("%d",&n);
printf("\n\n Enter the element \n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1;j++)
{
   if (a[j]<a[j+1])
{
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
}
}
}
printf("\n\n Sorted list");
for(i=0;i<n;i++)
{
printf("\n%d",a[i]);
}
printf("\n\n Enter the element to be searched");
scanf("%d",&s);
high=n-1;
low=0;
while(low<=high)
{
mid=(low+high)/2;
if(s>a[mid])
low=mid+1;
else if(s<a[mid]) 
high=mid-1;
else if(s==a[mid])
{
printf("\n\n The element %d is found at location %d",s,mid);
exit(0);
}}
printf("\n\n Element %d is not found ",s);
}
