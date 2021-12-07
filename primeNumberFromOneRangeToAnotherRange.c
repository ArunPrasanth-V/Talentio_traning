#include <stdio.h>
int main()
{
   int s,e,flag,count=0;
   s=3;
   e=11;
   for(int i=s;i<=e;i++)
   {
       flag=1;
       for(int j=2;j<i/2;j++)
       {
           if(i%j==0)
           {
               flag=0;
               break;
           }
           if(flag==1)
             count++;
       }
   }
    printf("count %d \n",count);
    return 0;
}
