/*#include<stdio.h>
long int multiplyNumbers(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}

long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}*/



#include<stdio.h>
int add(int n);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printf("addition of %d = %d",n,add(n));
    return 0;
}
int add(int n)
{
    if(n>=1)
          return n+add(n-1);
          else 
          return 0;
}