
#include <stdio.h>

int main()
{
    int count=0;
   int a[5]={1,0,0,1,0};
   for(int i=0;i<5;i++)
   {
       if(a[i]==0)
       count++;
   }
  printf("%d",count);
    return 0;
}
