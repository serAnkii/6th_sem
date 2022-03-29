![Screenshot from 2022-03-29 16-08-39](https://user-images.githubusercontent.com/89020930/160593841-443c182d-2193-466c-8c8b-d028ff1c0d6f.png)


SYNTAX ANALYSIS 

Checks weather the stream of token are syntatically correct or not

## Parser = checks that weather the string belongs to the grammer or not 
## it uses parse tree which is also knwon as syntax tree / derivation tree.

> we are using context free grammer
 
> LL(1) parser is also known as predictive parser we use ll(1) parsing table in it 
- > left l stands for left to right scanning of input string and another l is for left most derivation AND 1 is look ahead 
- > in bottom up parser lr(0) and (1) finds cannonical items 
- > in LR(0) l stands for left to right scanning and r stands for right most derivation but in reverse order coz we use bottom up approach 
- > clr is the most powerful parser 
- > operator precidance works on ambigous grammer and and non ambigious grammer too whereas other work only on non-ambigious grammer 
