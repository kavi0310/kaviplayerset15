#include<stdio.h>
int main()
{
   int n,a[1000],i,j;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n-i;j++)
       {
           if(a[j]%a[i]==0)
           {
               printf("%d ",a[j]);
               break;
           }
       }
   }
}
