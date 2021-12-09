#include <stdio.h>

void display(int num[2][5]);
int main()
{
    
    
    int a[2][5];
      for(int i=0;i<2;i++)
        for(int j=0;j<5;j++)
            scanf("%d",&a[i][j]);
     display(a); 
    return 0;
}
void display(int num[2][5])
{
    int sum=0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<5;j++){
            sum+=num[i][j];
        //printf("%d",num[i][j]);
        }
    }
     printf(" The Sum is : %d\n",sum);
}
