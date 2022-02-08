//name ankit negi
// section C
// roll.no 1918223
// subject : cbnst back exam

#include <stdio.h>
#include <math.h>

#define EPSILON 0.0001 

// secant
float findValueAt(float x)
{
   return x*x*x - 5*x +1;
   //return cos(x)+2*sin(x)+x*x; transcedental Equation
}

float findX(float x1,float x2)
{
      return (x1*findValueAt(x2) - x2 * findValueAt(x1)) / (findValueAt(x2) - findValueAt(x1));
}
 void secant()
{
    int maxIteration,i=1;
    float x1,x2,x;
    printf("Enter x1 and x2\n");
    scanf("%f%f",&x1,&x2);
    printf("Enter Maximum no of Iterations\n");
    scanf("%d",&maxIteration);
    
    x = findX(x1,x2);   
    do
    {
      x1=x2;
      x2=x;
      printf("Iterations=%d  Root=%f\n",i,x);   
      x = findX(x1,x2);  
      if(fabs(x-x2)<EPSILON)
      { 
          printf("Final Root=%f  Total Iterations=%d",x,i+1);
          return 0;

      }
      i++; 
    }while(i<=maxIteration);
    printf("Final Root=%f\n",x);

    
}

void regulafalsi()
{
    int maxIteration,i=1;
    float x1,x2,x3,x;
    printf("Enter Maximum no of Iterations\n");
    scanf("%d",&maxIteration);
    
   //Finding x1 and x2 
   do
   {
        printf("Enter the value of x1 and x2(starting boundary->Initial Roots)");
        scanf("%f%f",&x1,&x2);
        if(findValueAt(x1)*findValueAt(x2)>0)
        {
           printf("Roots are Invalid\n");
           continue;
        }
        else
        {
            printf("Roots Lie between %f and %f\n",x1,x2);
            break;

        }
    } while(1);

    //find the Intermediate point
    x = findX(x1,x2);   

    do
    {
      if(findValueAt(x)*findValueAt(x1)<0)
         x2=x;    
      else
         x1=x;
      printf("Iterations=%d  Root=%f\n",i,x);   
      x3 = findX(x1,x2);  
      if(fabs(x3-x)<EPSILON)
      { 
          printf("Root=%f  Total Iterations=%d",x,i);
          return 0;

      }
      x=x3;  //Important
      i++; 
    }while(i<=maxIteration);
    printf("Root=%f  Total Iterations=%d\n",x,--i);
}

// newtonrapson
float f(float x)
{
    return x*x*x - 3*x -5;
}

float differentiate(float x)
{
    return 3*x*x - 3;
}

void newtonrapson()
{
    int maxIteration,i;
    float x1,x2,x,x0;
    printf("Enter Maximum no of Iterations\n");
    scanf("%d",&maxIteration);

   
   do
   {
        printf("Enter the value of x1 and x2(starting boundary)");
        scanf("%f%f",&x1,&x2);
        if(f(x1)*f(x2)>0)
        {
           printf("Boundary Values are Invalid\n");
           continue;
        }
        else
        {
            printf("Roots Lie between %f and %f\n",x1,x2);
            break;
        }
    } while(1);


    if(fabs(f(x1)) < fabs(f(x2)))
        x0 = x1;
    else
        x1 = x2;    

    for(i=1;i<=maxIteration;i++)
    {
      x = x0 - (f(x0)/differentiate(x0));  
      
      if(fabs(x-x0)<EPSILON)
      {       
            printf("Iterations=%d  Final Root=%f\n",i,x);
           return 0;
      }      
      printf("Iterations=%d  Roots=%f\n",i,x); 
      x0=x;
    }
    printf("Root=%f  Total Iterations=%d\n",x,--i);
}



int main(){    
int num=0;     
printf("enter a choice :-\n1 for:Regula Falsi Method\n2 for:Newton Raphson Method\n3 for:Secant Method\n");    
scanf("%d",&num);    
switch(num){    
case 1:
regulafalsi();
break;
case 2:    
newtonrapson();
break;    
case 3:    
secant();    
break;    
default:    
printf("Enter a vaild number");    
}    
return main();  
}
