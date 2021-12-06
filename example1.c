#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//b-a c-b 
//equal
// add or subtract

void main()
{
    int a=5,b=10,c=5,count=10;
     
    count=abs(2*b-(a+c));
    
   if(count%2==0)
     printf("%d",count/2);
   else 
     printf("%d",count/2+1);

}

