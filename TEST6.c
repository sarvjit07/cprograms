#include <stdio.h>
int main()
{
  int n,n1,n2,rem,i,sum=0,counter=0;
  printf("Enter value of n1 and n2!\n");
  scanf("%d%d",&n1,&n2);

  for(i=n1;i<=n2;i++)
  {
    n=i;
    sum=0;
    while(n>0)
   { 
   rem=n%10;
   sum=sum+rem*rem*rem;
   n=n/10;
  }
  if(i==sum)
  {
      printf("%d   ",i);
     counter++;
  }
}
printf("\ntotal armstrong number in given range:%d\n",counter);
return 0;
}