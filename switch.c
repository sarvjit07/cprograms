#include<stdio.h>
void main()
{
    char ch;
    printf("\n Enter any character:");
    scanf("%c",&ch);
     
     switch(ch)
     {
         case'A':
         case'a':printf("it's an alphabet A or a\n");break;
         case'B':
         case'b':printf("it's an alphabet B or b\n");break;
     }

}