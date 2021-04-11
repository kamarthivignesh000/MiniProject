#include<stdio.h>
#include "main.h"
int main()
{
    printf("Choose options:\n");
    printf("1.And Operation\n2.Or Operation\n3.NOT Operation\n4.Nand Operation\n5.Nor Operation\n6.Xor Operation\n7.Xnor Operation\n8.Half Adder Operation\n9.Half Subtractor Operation\n10.Full Adder Operation\n11.Full Subtractor Operation\n");
    int choice,a,b,c;
    begin:
    printf("Enter a,b,c values\n");
    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a>1 || a<0 || b>1 || b<0 || c>1 || c<0)
    {
        printf("Enter valid values i.e., 0 or 1\n");
        goto begin;
    }
    else
    {
        printf("Enter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            anding(a,b);
            //break;
            goto begin;
            case 2:
            oring(a,b);
            //break;
            goto begin;
            case 3:
            Not(a);
            //break;
            goto begin;
            case 4:
            nand(a,b);
            //break;
            goto begin;
            case 5:
            nor(a,b);
            //break;
            goto begin;
            case 6:
            ex_or(a,b);
            //break;
            goto begin;
            case 7:
            ex_nor(a,b);
            //break;
            goto begin;
            case 8:
            half_adder(a,b);
            //break;
            goto begin;
            case 9:
            half_subtractor(a,b);
            //break;
            goto begin;
            case 10:
            full_adder(a,b,c);
            //break;
            goto begin;
            case 11:
            full_subtractor(a,b,c);
            //break;
            goto begin;
            default:
            printf("Enter valid values\n");
            break;
        }
    }
}
void anding(int a,int b)
{
    printf("a=%d b=%d  result=%d\n",a,b,a&b);
}
void oring(int a,int b)
{
    printf("a=%d b=%d  result=%d\n",a,b,a|b);
}
void Not(int a)
{
    printf("a=%d result=%d\n",a,!a);
}
void nand(int a,int b)
{
    printf("a=%d b=%d  result=%d\n",a,b,!(a&b));
}
void nor(int a,int b)
{
    printf("a=%d b=%d  result=%d\n",a,b,!(a|b));
}
void ex_or(int a,int b)
{
    printf("a=%d b=%d  result=%d\n",a,b,a^b);
}
void ex_nor(int a,int b)
{
    printf("a=%d b=%d  result=%d\n",a,b,!(a^b));
}
void half_adder(int a,int b)
{
    printf("a=%d b=%d  sum=%d  carry=%d\n",a,b,a^b,a&b);
}
void half_subtractor(int a,int b)
{
    printf("a=%d b=%d  difference=%d  borrow=%d\n",a,b,a^b,((!a)&b));
}
void full_adder(int a,int b,int c)
{
    printf("a=%d b=%d c=%d  sum=%d  carry=%d\n",a,b,c,a^b^c,(c&(a^b))+(a&b));
}
void full_subtractor(int a,int b,int c)
{
    printf("a=%d b=%d c=%d  difference=%d  borrow=%d\n",a,b,c,a^b^c,(((!a)&c)+((!a)&b)+(b&c)));
}