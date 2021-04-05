#include<stdio.h>
void main ()
{
    char ch;
    printf("\n Enter any char:");
    scanf("%c",&ch);
    if (ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    printf("\n vowel");
    else
    printf("\n consonant");
    
}