/*#include <stdio.h>
int main()
{
  int n,i,sum=0;
  printf("enter the value of n:");
  scanf("%d",&n);
  for(i=1;i<n;i++)
  {
    if(n%i==0)
    {
      sum=sum+i;
    }
  }
  if(n==sum)
  printf("Perfect number");
  else
  printf("Not perfect number");
}*/


#include <stdio.h>
int main()
{
  int n,m,j,i,r,limit,fact,sum;
  printf("enter limit:");
  scanf ("%d",&limit);
  for(n=1;n<=limit;n++)
  {
    m=n;
    j=n;
    sum=0;
    while(j>0)
    {
      r=n%10;
      fact=1;
      for(i=r;i>=1;i--)
      {
        fact=fact*i;
      }
      sum=sum+fact;
      j=j/10;
    }
    if(m==sum)
    printf("%d is strong \n",m);
    else
    printf("%d is not strong \n",m);
  }
  return 0;
}