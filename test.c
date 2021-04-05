#include <stdio.h>
int main()
{
  int n,m=20,i,j,k;
  printf("enter the value of row ");
  scanf("%d",&n);
  
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=m-1;j++)
    {
      printf(" ");
    }
    for(k=1;k<=2*i-1;k++)
    {
      printf("*");
    }
    m--;
    printf("\n");
  }
  return 0;
}