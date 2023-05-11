#include <stdio.h>
#include <conio.h>
main(){
	
	float toan, ly, hoa;
	printf("Nhap diem toan, ly, hoa :");
	scanf("%f %f %f", &toan, &ly, &hoa);
	printf("Tong diem = %f\n Diem trung binh = %f", toan + ly + hoa, (float)1/3*(toan + ly + hoa));

	getch();
}


