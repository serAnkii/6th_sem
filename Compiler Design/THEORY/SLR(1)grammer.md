# SLR(1) works on the canonnical items of LR(0) parser.
![Capture](https://user-images.githubusercontent.com/89020930/164878241-c66c69f4-69e7-424c-9b1b-6c33bc7e9c30.PNG)
 
 ## but the major difference is in parsing table 
 - variables(goto) will remain same , shift and accept will also remian same but the reduction will be a little bit different
 - we don't write reduction move in whole the row whereas we write it in follow of left hand side.
 - ![Capture](https://user-images.githubusercontent.com/89020930/164878449-b46b0ffe-f45b-4538-9d8a-0af681634bad.PNG)
