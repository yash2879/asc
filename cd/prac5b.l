%{
#include<stdio.h>
int line=0,words=0,c_letters=0,num=0,spl_chr=0,total=0;
%}

%%
\n {line++; words++;}
[\t ''] words++;
[a-z A-z] c_letters++;
[0-9] num++;
. spl_chr++;
%%

int main()
{
yyin=fopen("sample.txt","r");
yylex();
printf("\nfile contents\n");
printf("\n%d lines",line);
printf("\n%d words\n",words);
return 0;
}

int yywrap()
{
	return 1;
}

