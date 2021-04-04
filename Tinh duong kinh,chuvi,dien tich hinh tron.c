#include <stdio.h>
#include <stdlib.h>



int main() 
{
	float r,d,c,s;
	const pi=3.14;
	printf("Nhap vao ban kinh cua hinh tron:");
	scanf("%f",&r);
	printf("Duong kinh cua hinh tron la: %3.2f cm\n",r*2);
	printf("Dien tich cua hinh tron la: %3.2f cm^2\n",pi*r*r);
	printf("Chu vi cua hinh tron la: %3.2f cm",2*pi*r);
	return 0;
}
