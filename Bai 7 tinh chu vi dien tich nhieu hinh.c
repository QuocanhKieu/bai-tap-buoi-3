#include <stdio.h>
#include <conio.h>
main(){
	
	float rTron, canhVuong, dNhat, rNhat;
	printf("Nhap ban kinh tron, canh vuong, dai nhat, rong nhat :");
	scanf("%f %f %f %f", &rTron, &canhVuong, &dNhat, &rNhat);
	printf("Chu vi hinh tron = %f\ndien tich hinh tron = %f\n dien tich hinh vuong = %f\ndien tich hinh vuong = %f\n", 2*rTron*3.14, rTron*rTron*3.14, canhVuong*canhVuong, dNhat * rNhat);


	
	getch();
}


