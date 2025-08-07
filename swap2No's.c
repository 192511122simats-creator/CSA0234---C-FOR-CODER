#include<stdio.h>
int main()
{
    int m=1,n=2,o;
    o=m;
    m=n;
    n=o;
    printf("%d",m);
    printf("\n%d",n);
    return 0;
}
