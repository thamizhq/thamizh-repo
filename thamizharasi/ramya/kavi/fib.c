/**
 * @file      : fib.c
 * @breif     : This file contains source code for printing fibonacii series
 *              till given maximum index.
 * @author    : Aashish Ashok Patel
 * @Copyright : (c) 2012-2013 , VVDN Technologies Pvt. Ltd.
 *              Permission is hereby granted to everyone in VVDN Technologies
 *              to use the Software without restriction, including without
 *              limitation the rights to use, copy, modify, merge, publish,
 *              distribute, distribute with modifications.
 */

#include <stdio.h>

int main()
{
    int max_index,i;                           /*  Index variable  */

    printf("Enter max index: ");
    scanf("%d",&max_index);
    for(i = 0;i < max_index;i++)               /*  Prints value at each index  */
    {
        printf("%d ",fib(i));
    }
    printf("\n");
}

/**
 * @function : fib
 * @param    : indx
 * @breif    : This function takes index value and evalautes fibonacii equivalent
 *             at that index using recursion.
 * @return   : value at given index
 * @caller   : main
 */

int fib(int indx)
{
    if((indx == 0) || (indx == 1)) {           /*  Returns 1 for first two indices  */
        return 1;
    } else {
        return (fib(indx-2) + fib(indx-1));    /*  Returns sum of previous two values  */
}
