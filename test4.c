#include<stdio.h>  
int main()  
{  
    int fact=1,sum=0,limit;  
    int n,r,i;  
    printf("Enter the 'n' number");  
    scanf("%d",&n);  
    for(n=1;i<=limit;n++)
     {
     sum=0;
     while (n>0)
     {
         r=n%10;
         fact=1;
         for ( i = r; i >= 1; i--)
         {
             fact=fact*i;
         }
         sum=sum+fact;
         n=n/10;
     }
     if (n==sum)
     {
         printf("%d strong\n",n);
     }
     }
}

     