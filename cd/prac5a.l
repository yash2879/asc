%{
#include<stdio.h>
%}

%%
"hi" {printf("By");}
.* {printf("worng");}
%%
int main()
{
printf("Enter input: ");
yylex();
}
int yywrap()
{
return 1;
}
