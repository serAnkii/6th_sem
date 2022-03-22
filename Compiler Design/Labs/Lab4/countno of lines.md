# Lex programming

```lex
%{
int count = 0
%}

%%
[A-Z]
printf("%s "a capital letter" \n,yytext);count++;}.\n
{printf("%s not a capital letter", yytext);}
\n {return 0;}

%%

int yywrap(){}
int main(){
yylex();
printf("\nNumber of capital letters - %d/n",count);

return 0;

}
```
# Output
![Screenshot from 2022-03-22 12-31-50](https://user-images.githubusercontent.com/89020930/159425882-43ecbabd-a3fc-4273-bcd6-d49ac14a91f9.png)
