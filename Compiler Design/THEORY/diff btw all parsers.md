## overview

![Capture](https://user-images.githubusercontent.com/89020930/164887471-df5a3106-c8ad-4923-8759-c61440ac370a.PNG)


> LR(0)<SLR(1)<LALR<CLR(1) `power` <br/>
> LR(0)<=SLR(1)=LALR<=CLR(1) `states`  
- power increses because number of conflicts decreases by using reduce move optimisation 
- red line is top-down and black coloured figure are bottom-up parsers
***

# LR(0)
 ![Capture](https://user-images.githubusercontent.com/89020930/164882017-d5b4e967-4e95-4de5-9f92-b89f510f6dd9.PNG)
 # SLR(1)
 ![Capture](https://user-images.githubusercontent.com/89020930/164882293-b2c5996a-a2b1-4196-b484-42738f74bccf.PNG)
# CLR 
![Capture](https://user-images.githubusercontent.com/89020930/164882615-f10da3d1-a5a5-4f79-8ab0-65db6f5913b1.PNG)
# LALR
![Capture](https://user-images.githubusercontent.com/89020930/164882821-a285ba17-218d-4695-ab62-eec6dd84c722.PNG)


-  if clr has no SR conflict LALR will also not have it
-  if clr has no RR Conflict LALr might have it 
