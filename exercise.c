// 4.
/*#include<stdio.h>
int main()
{
    int a=5;
    a=6;
    a=a+5*a;
    printf("a=%d\n",a);
    return 0;
}*/
//a=6+5*6;
//a=36

//5.
/*#include<stdio.h>
 int main()
 {
     int a=5,b=5;
     printf("%d,%d\t",++a,b--);
     printf("%d,%d\t",a,b);
     printf("%d,%d\t",++a,b++);
     printf("%d,%d\n",a,b);
     return 0;
}*/
/*++a,b--
6,5
a,b
6,4
++a,b++
7,4
a,b
7,5
*/

//6.
/*#include <stdio.h>
int main(void)
{
    int x, y, z;
    x = 8;
    y = x++;
    z = (x + y);
    z++;
    printf("x=%d,y=%d,z=%d\n", x, y, z);
    return 0;
}*/

//x=9
//y=8                  
//z=8+9
//z++=18

//7.
/*#include<stdio.h>
int main()
{
    int a=4,b=8,c=3,d=9,z;
    z=a++ + ++b * c-- - --d;
    printf("a=%d, b=%d, c=%d ,d=%d, z=%d\n",a,b,c,d,z);
    return 0;
}*/

/*z= 4++ + ++8 * 3-- - --9
z=4+9*3-8
a=5, b=9, c=2 ,d=8
z=4+27-8
z=31-8
z=23*/

//8.
/*#include<stdio.h>
int main()
{
    int a=14,b,c;
    a=a%5;
    b=a/3;
    c=a/5%3;
    printf("a=%d,b=%d,c=%d\n",a,b,c);
    return 0;

}*/
//a=14%5=4
//b=4/3=1
//c=14/5%3=2%3=2

//9.
/*#include<stdio.h>
int main()
{
    int a=15,b=13,c=16,x,y;
    x=a-3%2+c*2/4%2+b/4;
    y=a=b+5-b+9/3;
    printf("x=%d,y=%d\n",x,y);
    return 0;
}*/

//x=15-3%2+16*2/4%2+13/4
//x=15-3%2+16*2/4%15/4
//x=15-3%18*2/4%15/4
//x=12%18*2/4%15/4
//x=12%36/4%15/4
//X=12%36/4%3
//X=12%36/1
//X=
//y=15=13+5-13+9/3
//15=18-13+9/3
//15=5-13+9/3
//15=-8+9/3
//15=1/3

/*#include<stdio.h>
int main()
{
    int a=9,b=15,c=16,d=12,e,f;
    e=!(a>b || b<c);
    f=(a>b) ? a-b:b-a;
    printf("e=%d,f=%d\n",e,f);
    return 0;
}*/
//e=!(9>15 || 15<16)
//e=!( 0 || 1 )
//e=!1
//e=0
//f=(9>15) ? 9-15:15-9
//0 ? -6:6
//6   page number 42

// 2.
/* #include<stdio.h>
int main()
{
    int  a=2,b=1,c,d;
    c=a<b;
    d=(a>b) && (c<b);
    printf("c=%d,d=%d\n",c,d);
    return 0;
}*/

// c=2<1=0
//d=2>1=1 && 0<1=1

// 1.
/* #include<stdio.h>
int main()
{
    int  a=0;
    a=-a-a+!a;
    printf("%d\n",a);
    return 0;
} */

// 10.
/*#include<stdio.h>
int main()
{
    int x,y,z,k=10;
    k+=(x=5,y=x+2,z=x+y);
    printf("x=%d,y=%d,z=%d,k=%d\n",x,y,z,k);
    return 0;

}*/

//x=5
//y=5+2
//z=7+5=12
//K+=12
//K=12+10
//K=22

//11.
/*#include<stdio.h>
int main()
{
    float b;
    b=(float)15/2;
    printf("%f\t",b);
    b=(float)15/2+(15/2);
    printf("%f\n",b);
    return 0;
}*/

// b=7.5
//b=14.50




//12.
/*#include<stdio.h>
int main()
{
    int a=9;
    char ch='A';
    a=a+ch+24;
    printf("%d,%c\t%d,%c\n",ch,ch,a,a);
    return 0;   
}*/


//ch='A'
//ch=65
//a=98
//a=b

//13.
/*#include<stdio.h>
int main()
{
    int a,b,c,d;
    a=b=c=d=4;
    a*=b+1;
    c+=d*=3;
    printf("a=%d,c=%d\n",a,c);
    return 0;

}*/
//a=20
//c=16



//14.
/*#include<stdio.h>
int main()
{
    int a=5,b=10,temp;
    temp=a, a=b, b=temp;
    printf("a=%d,b=%d\n",a,b);
    return 0;
}*/

//a=10
//b=5

//15.
/*#include<stdio.h>
int main()
{
    int a=5,b=6,max;
    max = (a>b ? a :  b);
    printf("%d\n",max);
    return 0;

}*/
//max = (5>6 ? 5 :  6)
//max=(0?5:6)
//max=6

//16.
/*#include<stdio.h>
int main()
{
    int a=5,b=6;
    printf("%d\t",a=b);
    printf("%d\t",a==b);
    printf("%d %d\n",a,b);
    return 0;
}*/
//a=b
//a=6
//a==b
//6==6
//1
//a=6;b=6

//17.
/*#include<stdio.h>
int main()
{
    int a=3,b=4,c=3,d=4,x,y;
    x=(a=5) && (b=7);
    y=(c=5) || (d=8);
    printf("a=%d, b=%d ,c=%d, d=%d,x=%d,y=%d\n",a,b,c,d,x,y);
    x=(a==6) && (b==9);
    y=(c==6) || (d==10);
    printf("a=%d, b=%d ,c=%d, d=%d,x=%d,y=%d\n",a,b,c,d,x,y);
    return 0;

} */
//?????????????????????????????????????????????????????????????????????

//
//


//18.
/*#include<stdio.h>
int main()
{
    int a=10;
    a=a++;
    a=a++ * a--;
    printf("%d\n",a);
    printf("%d\n",a++ * a++);
    return 0;
}*/

//a=a++
//a=11*10
//a=110

//a=110*111
//a=12210


//19.
/*#include<stdio.h>
int main()
{
  int g=2,b=2,x,y;
  x=4*(++g*2+3);
  y=4*(b++ * 2+3);
  printf("g=%d,b=%d,x=%d,y=%d",g,b,x,y);
  return 0;
}*/

/*x=4*(3*2+3)
x=4(6+3)
x=36

y=4*(2*2+3);
y=4*7
y=28*/



/*#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("enter temp in calsius\n");
    scanf("%f",&celsius);
    fahrenheit=(celsius*1.8)+32;
    printf("In fahrenheit temp : %f",fahrenheit);
    return 0;

}*/



/*#include<stdio.h>
int main()
{
    float radius,area,parimeter;
     printf("put radius of circle\n");
     scanf("%f",&radius);
     area=3.14*radius*radius;
     printf("area of circle is:%f\n",area);
     parimeter=2*3.14*radius;
     printf("perimeter of circle:%f\n",parimeter);

     return 0;
}*/


/*#include<stdio.h>
int main()
{
    int number;
    printf("enter a  number");
    scanf("%d",&number);
    printf("hexadecimal char %X\n",number);
    printf("octaldecimal integer %o\n",number);
}*/


/*#include<stdio.h>
int main()
{   int number,remainder;
    printf("enter a number");
    scanf("%d",&number);
    remainder=number%3;
    printf("Remainder:%d",remainder);
    

}*/


/*#include<stdio.h>
int main()
{
    int number1,number2,diffrence,sum;
    printf("enter first number",number1);
    scanf("%d",&number1);
    printf("enter second number",number2);
    scanf("%d",&number2);

    sum=number1>number2?printf("Sum = %d",number2+number1):printf("Sub = %d",number2-number1);
    // printf("sum %d",sum);


}*/


#include<stdio.h>
int main()
{
    int che,phy,beee,crt,bme;
    float percentage,marks;
    printf("Enter marks in five subjects\n");
    scanf("%d%d%d%d%d",&che,&phy,&beee,&crt,&bme);
    marks=che+phy+beee+crt+bme;
    percentage=(marks/500)*100;
    printf("percent=%f",percentage);
return 0;
}