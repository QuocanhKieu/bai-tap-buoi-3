/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{	
	float tiGia = 0;
	float money = 0;
    printf("Nhap so Dollar\n");
    scanf("%f", &money);
    printf("Nhap ti gia Dollar/ Vnd\n");
    scanf("%f", &tiGia);
    printf("%.2f Dollars to Vnd is %.2f Vnd", money , tiGia*money);

    return 0;
}

