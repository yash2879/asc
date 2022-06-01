%{
	int flag=0;
%}
%%
[(] {flag++;}
[)] {flag--;}
[\n] {if(flag==0)
	printf("\n\t Well formed parenthesis");
      else if(flag>0)
	printf("\n\t Closing parenthesis missing");
      else
        printf("\n\t Opening parenthesis missing");
      }
%%

int main(void)
{
	printf("Enter the expression");
	yylex();
	return(0);
}
int yywrap(void)
{
	return 0;
}
int yyerror(void)
{
	printf("Error\n");
	exit(1);
}
