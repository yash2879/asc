%{
%}
%%
[0-9]* {printf("\nIt is a Digit\n");}
[a-z|A-Z][a-z|A-Z|0-9]* {printf("\nIt is an Identifier\n");}
[|\t] {printf("\nIt is a Delimeter\n");}
%%
int main(void)
{
	printf("\nEnter the expression-->\n");
	yylex();
	return(0);
}

int yywrap(void)
{
	return(0);
}
