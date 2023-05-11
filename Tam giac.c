/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{	
	float height = 0;
	float bottom = 0;
    printf("Nhap vao chieu cao tam giac\n");
    scanf("%f", &height);
    printf("Nhap vao canh day tam giac\n");
    scanf("%f", &bottom);
    printf("S tam giac = %.2f", height*bottom/2);
    return 0;
}

