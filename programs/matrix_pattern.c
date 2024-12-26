/*
To Print a Matrix like this
1	1	1	
1	2	1	
1	1	1	

1	1	1	1	1	
1	2	2	2	1	
1	2	3	2	1	
1	2	2	2	1	
1	1	1	1	1	

1	1	1	1	1	1	1	
1	2	2	2	2	2	1	
1	2	3	3	3	2	1	
1	2	3	4	3	2	1	
1	2	3	3	3	2	1	
1	2	2	2	2	2	1	
1	1	1	1	1	1	1	

based on one variable, named order
*/

#include <stdio.h>

/*To Find the minimum of 4 numbers*/

int min(int a,int b,int c,int d)
{
    int minimum;
    if((a<=b) && (a<=c) && (a<=d))
        minimum = a;
    else if((b<=a) && (b<=c) && (b<=d))
        minimum = b;
    else if((c<=a) && (c<=b) && (c<=d))
        minimum = c;
        else
        minimum =d;
    return minimum;
}

/*Get the Digit which is to be printed*/

void printdigit(int i,int j,int order)
{
    int printnumber = min(i,j,((order-i)+1),((order-j)+1));
    printf("%d",printnumber);
}
void main(void)
{
    int i,j;
    int order = 7; /*Order of the Matrix (7x7 Matrix has an order of 7)*/
    for(i=1;i<=order;i++)
    {
        for(j=1;j<=order;j++)
        {
            printdigit(i,j,order);
            printf("\t");
        }
        printf("\n");
    }
}
