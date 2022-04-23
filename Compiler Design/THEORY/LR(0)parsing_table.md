WE use LR(0) cannonical items to to make a ll1 parser
![Capture](https://user-images.githubusercontent.com/89020930/164876612-23581c35-0578-4ae3-86a6-1ecf6ab87636.PNG)

. here shows that weather we have seen that thing or not . left side to dot are seen and to right are not seen;

### steps 
- augument the grammer  (E'->E)
- if there is an vaiable then open the variable and put dot in front of every rule .
- ![Capture](https://user-images.githubusercontent.com/89020930/164877608-8bafedb3-fe2e-42bc-8904-1468d010cb50.PNG)
- till here it is the 0 step 
- now make the graph as follows
- ![Capture](https://user-images.githubusercontent.com/89020930/164877938-2d2af62a-a634-446d-888b-9e758725a95e.PNG)
- now from the table (s means shift  and r means reduce )
- ![Capture](https://user-images.githubusercontent.com/89020930/164878116-60ff72e6-7ed7-4a70-8570-18f8a6d01b7f.PNG)

## if there is any of 2 conflicts (shift-reduce and reduce-reduce) in any stage then it is not a ll(1) grammer...
