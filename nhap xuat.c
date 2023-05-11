/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{	
	float r = 0;
    printf("Nhap ban kinh hinh tron de tinh dien tich\n");
    scanf("%f", &r);
    printf("Dien tich hinh tron co r = %.2f la %.2f\n", r, r*r*3.14);
	printf("Chi vu hnh tron r = %.2f la %.2f", r, 2*r*3.14);
    return 0;
}

