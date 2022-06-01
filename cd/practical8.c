//calculate first and follow
#include<stdio.h>
#include<string.h>
void main()
{
int i,l,m;
char pro[10],pro1[10],pro2[10];
printf("Enter the production of S-->");
scanf("%s",pro1);
printf("Enter the production ofA-->"); 
scanf("%s",pro2);
l=strlen(pro1);
m=strlen(pro2);
for(i=0;i<=l;i++)
{
if(pro1[0]>=97 && pro1[0]<=123)
{
pro[0]=pro1[0];
}
if(pro1[0]==65)
{
if(pro2[0]>= 97 && pro2[0]<=123)
{
pro[0]=pro2[0];
}
}
if(pro1[i]==65)
{
pro[2]=pro1[i+1];
}
}
printf("\nFIRST of S=%c",pro[0]);
printf("\nFOLLOW of S=$");
for(i=0;i<=m;i++)
{
if(pro2[0]>=97 && pro2[0]<=123)
{
pro[1]=pro2[0];
}
}
printf("\nFIRST of A=%c",pro[1]);
printf("\nFOLLOW of A=%c\n",pro[2]);
}
/*
Enter the production of S-->bAdnera
Enter the production ofA-->primitr

FIRST of S=b
FOLLOW of S=$
FIRST of A=p
FOLLOW of A=d
*/
