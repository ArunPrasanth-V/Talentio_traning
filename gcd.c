#include <stdio.h>

int main()
{
    int a=11;
    int b=8;
    int aa=a>b?b:a;
    b=a>b?a:b;
    for(int i=aa;i>0;i--)
    {
        if(a%i==0 &&b%i==0)
        {
            printf("%d",i);
            break;
        }
    }

    return 0;
}
