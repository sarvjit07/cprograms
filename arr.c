#include <stdio.h>
int main() 
{
    int i=5;
     int arr[5],sum=0;
    for( i = 0; i < 5; i++)
  {
       printf("enter a value for arr[%d]=",i);
       scanf("%d",&arr[i]);
       sum+=arr[i];

    }
    printf("sum=%d\n",sum);
    
}