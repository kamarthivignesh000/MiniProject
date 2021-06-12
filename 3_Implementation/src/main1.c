/**
 * @file main1.c
 * @author Vignesh (kamarthivignesh000@gmail.com)
 * @brief Logic Gates Operations
 * @version 0.1
 * @date 2021-06-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include "main.h"
int main()
{
    /**
     * @brief Choose operation
     * 
     */
    printf("Choose options:\n");
    printf("1.And Operation\n2.Or Operation\n3.NOT Operation\n4.Nand Operation\n5.Nor Operation\n6.Xor Operation\n7.Xnor Operation\n8.Half Adder Operation\n9.Half Subtractor Operation\n10.Full Adder Operation\n11.Full Subtractor Operation\n12.Multiplexer\n13.Demultiplexer\n14.Encoder\n15.Decoder\n");
    int choice,a,b,c,sel,y3,y2,y1,y0;
    begin:
        printf("Enter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            /**
             * @brief Enter a & b values
             * 
             */
                printf("Enter a,b values\n");
                scanf("%d\n%d",&a,&b);
                if(a>1 || a<0 || b>1 || b<0)
                {
                    printf("Enter valid values i.e., 0 or 1\n");
                    goto begin;
                }
                anding(a,b);
                goto begin;
            case 2:
            /**
             * @brief Enter a, b & c values
             * 
             */
                printf("Enter a,b values\n");
                scanf("%d\n%d",&a,&b);
                if(a>1 || a<0 || b>1 || b<0)
                {
                    printf("Enter valid values i.e., 0 or 1\n");
                    goto begin;
                }            
                oring(a,b);
                goto begin;
            case 3:
            /**
             * @brief Enter a, b & c values
             * 
             */
                printf("Enter a values\n");
                scanf("%d",&a);
                if(a>1 || a<0)
                {
                    printf("Enter valid values i.e., 0 or 1\n");
                    goto begin;
                }
                Not(a);
                goto begin;
            case 4:
            /**
             * @brief Enter a, b & c values
             * 
             */
                printf("Enter a,b,c values\n");
                scanf("%d\n%d\n%d",&a,&b,&c);
                if(a>1 || a<0 || b>1 || b<0 || c>1 || c<0)
                {
                    printf("Enter valid values i.e., 0 or 1\n");
                    goto begin;
                }
                nand(a,b);
                goto begin;
            case 5:
            /**
             * @brief Enter a, b & c values
             * 
             */
                printf("Enter a,b values\n");
                scanf("%d\n%d",&a,&b);
                if(a>1 || a<0 || b>1 || b<0)
                {
                    printf("Enter valid values i.e., 0 or 1\n");
                    goto begin;
                }
                nor(a,b);
                goto begin;
            case 6:
            /**
             * @brief Enter a, b & c values
             * 
             */
                printf("Enter a,b,c values\n");
                scanf("%d\n%d",&a,&b);
                if(a>1 || a<0 || b>1 || b<0)
                {
                    printf("Enter valid values i.e., 0 or 1\n");
                    goto begin;
                }
                ex_or(a,b);
                goto begin;
            case 7:
            /**
             * @brief Enter a, b & c values
             * 
             */
                printf("Enter a,b values\n");
                scanf("%d\n%d",&a,&b);
                if(a>1 || a<0 || b>1 || b<0)
                {
                    printf("Enter valid values i.e., 0 or 1\n");
                    goto begin;
                }
                ex_nor(a,b);
                goto begin;
            case 8:
            /**
             * @brief Enter a, b & c values
             * 
             */
                printf("Enter a,b values\n");
                scanf("%d\n%d",&a,&b);
                if(a>1 || a<0 || b>1 || b<0)
                {
                    printf("Enter valid values i.e., 0 or 1\n");
                    goto begin;
                }
                half_adder(a,b);
                goto begin;
            case 9:
            /**
             * @brief Enter a, b & c values
             * 
             */
                printf("Enter a,b values\n");
                scanf("%d\n%d",&a,&b);
                if(a>1 || a<0 || b>1 || b<0)
                {
                    printf("Enter valid values i.e., 0 or 1\n");
                    goto begin;
                }
                half_subtractor(a,b);
                goto begin;
            case 10:
            /**
             * @brief Enter a, b & c values
             * 
             */
                printf("Enter a,b,c values\n");
                scanf("%d\n%d\n%d",&a,&b,&c);
                if(a>1 || a<0 || b>1 || b<0 || c>1 || c<0)
                {
                    printf("Enter valid values i.e., 0 or 1\n");
                    goto begin;
                }
                full_adder(a,b,c);
                goto begin;
            case 11:
            /**
             * @brief Enter a, b & c values
             * 
             */
                printf("Enter a,b,c values\n");
                scanf("%d\n%d\n%d",&a,&b,&c);
                if(a>1 || a<0 || b>1 || b<0 || c>1 || c<0)
                {
                    printf("Enter valid values i.e., 0 or 1\n");
                    goto begin;
                }
                full_subtractor(a,b,c);
                goto begin;
            case 12:
            /**
             * @brief Enter a & b values
             * 
             */
                printf("Enter a,b values\n");
                scanf("%d\n%d",&a,&b);
                if(a>1 || a<0 || b>1 || b<0)
                {
                    printf("Enter valid values i.e., 0 or 1\n");
                    goto begin;
                }
                printf("Enter selection line\n");
                scanf("%d",&sel);
                multiplexer_2x1(a,b,sel);
                goto begin;
            case 13:
            /**
             * @brief Enter a, b & c values
             * 
             */
                printf("Enter a,b,c values\n");
                scanf("%d\n%d\n%d",&a,&b,&c);
                if(a>1 || a<0 || b>1 || b<0 || c>1 || c<0)
                {
                    printf("Enter valid values i.e., 0 or 1\n");
                    goto begin;
                }
                printf("Enter selection line\n");
                scanf("%d",&sel);
                demultiplexer_1x2(c,sel);
                goto begin;
            case 14:
                printf("Enter y3,y2,y1,y0 values\n");
                scanf("%d\n%d\n%d\n%d",&y3,&y2,&y1,&y0);
                if(y3>1 || y3<0 || y2>1 || y2<0 || y1>1 || y1<0 || y0>1 || y0<0)
                {
                    printf("Enter valid values i.e., 0 or 1\n");
                    goto begin;
                }
                encoder(y3,y2,y1,y0);
                goto begin;
            case 15:
                printf("Enter a & b values\n");
                scanf("%d\n%d",&a,&b);
                if(a>1 || a<0 || b>1 || b<0)
                {
                    printf("Enter valid values i.e., 0 or 1\n");
                    goto begin;
                }
                decoder(a,b);
                goto begin;
            default:
                printf("Enter valid values\n");
                break;
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
void multiplexer_2x1(a,b,sel)
{
    printf("a=%d b=%d sel=%d result=%d\n",a,b,sel,(((!sel)&a)+(sel&b)));
}
void demultiplexer_1x2(y,sel)
{
    printf("y=%d sel=%d a=%d b=%d\n",y,sel,(!sel)&y,sel&y);
}
void encoder(y3,y2,y1,y0)
{
    printf("y3=%d y2=%d y1=%d y0=%d a=%d b=%d\n",y3,y2,y1,y0,y3+y2,y3+y1);
}
void decoder(a,b)
{
    printf("a=%d b=%d y3=%d y2=%d y1=%d y0=%d\n",a,b,a&b,a&(!b),(!a)&b,(!a)&(!b));
}