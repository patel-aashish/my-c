/*
 * =====================================================================================
 *
 *       Filename:  ex27_1.c
 *
 *    Description:  Write a recursive function to print below pyramid
 *                  1
 *                  1 2
 *                  1 2 3 
 *                  1 2 3 4
 *
 *        Version:  1.0
 *        Created:  Monday 07 May 2018 09:00:20  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aashish Patel (), aashish.a.patel@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


#include	<stdlib.h>
#include    <stdio.h>

void pyramid (int n);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int
main ( int argc, char *argv[] )
{
    int n;

    do {
        printf ( "Enter n (>0):" );
        scanf ( "%d", &n );
    } while ( n < 1 );				/* -----  end do-while  ----- */
    
    pyramid(n);

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  pyramid
 *  Description:  
 * =====================================================================================
 */
void
pyramid ( int n )
{
    int i;

    if (n == 0) {
        return;
    }
    
    pyramid(n-1);
    for (i = 1; i <= n; i++) {
        printf ( "%d ", i);
    }
    printf ( "\n" );
}		/* -----  end of function pyramid  ----- */
