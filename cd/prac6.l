%{
%}
%%
[0-9]* {printf("\nIt is a Digit");}
[a-z|A-Z][a-z|A-Z|0-9]* {printf("\n It is Identifier");}
[|\t] {printf("\n It is Delimeter");}
%%
int main(void)
{
printf("\n Enter the Experssion-->");
yylex();
return(0);
}
int yywrap(void)
{
return(0);
}
