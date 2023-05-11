#include <stdio.h>
#include <conio.h>
main(){
	int bottom, height, top;
	printf("Nhap bottom, height, top ");
	scanf("%d %d %d", &bottom, &height, &top);
	printf("Dien tich hinh thang = %d", ((bottom + top)*height)/2);

	getch();
}


