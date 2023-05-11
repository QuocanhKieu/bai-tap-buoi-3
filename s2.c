/******************************************************************************

                            Online c compiler.
                code, compile, Run and Debug c program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{	
	int i = 1, c = 2, d = 3, b = 4, a = 5;
	printf("i = 1, c = 2, d = 3, b = 4, a = 5\n");
	int s1 = ++i % 7;
//	printf("s1 = %d\n", s1);
//	printf(" i = %d", i);
	int s3 = a * (b + c/d) - 22;
	int s2 = 5 * (c - 3 + d);
	printf("++i mod 7 = %d\n 5 * (c - 3 + d) = %d\n a * (b + c/d) - 22 = %d\n", s1,s2,s3);
    return 0;
}


