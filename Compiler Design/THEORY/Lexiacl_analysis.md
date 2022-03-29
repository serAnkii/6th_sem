![Capture](https://user-images.githubusercontent.com/89020930/160384582-28267b35-00e7-46d1-8cac-c33f6a3d082b.JPG)


## It is also known as tokenixation and the program which is dividing is known as lexer,tokenizer,scanner etc

# Tokens include
- > identifier  - those which programmer is defining ex x,y
- > seperators - punctuators ex (,),;
- > keywords - which are already defined in the programming language ex int,auto
- > operators - < , > + 
- > constants -> sometimes true/ false and literals 
- > special characters - $ ,& etc
- > "" inside these commas all the value will be counted as one 

> ## we use finite automata in it  -> application of finite automata is to convert any program  into convert into tokens 


# questions on lexical analysis

![Screenshot from 2022-03-29 10-35-46](https://user-images.githubusercontent.com/89020930/160537420-ebb4fa4a-cbfe-4241-a1ff-bf405938be91.png)


-lexical analysise desen't check that is program making the semse or not.
- `+` is used as unioperator and binary operator so that's why we need to check for the next token first in such cases.
- comment will get removed and treated as a gap
