#include<stdio.h>
int main()
{
    int a,b,c,sum,avg;
    printf("Enter three number:");
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    printf("\nSum of number:%d",sum);
    avg=(a+b+c)/3;
    printf("\nAverage of number:%d",avg);
    return 0;
}
