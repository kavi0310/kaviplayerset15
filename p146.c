#include<stdio.h>
int main()
{
    int a,b,f1=1,f2=1,i,j;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
        f1=f1*i;
    }
    for(j=1;j<=b;j++)
    {
        f2=f2*j;
    }
    f1=f1/f2;
    printf("%d",f1);
}
