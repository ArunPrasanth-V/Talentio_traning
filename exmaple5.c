#include <stdio.h>
int main() {
    int a=do(9,10,11,12);
    printf("%d",a);
    return 0;
}
int do(int a,int b,int c,int d)
{
    if(a>b &&a>c &&a>d)  return a;
    else if(b>c &&b>d) return b;
    else if(c>d)       return c;
    
    return d;
}
