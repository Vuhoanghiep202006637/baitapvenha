#include <stdio.h>
#include <stdlib.h>



int main()
{
	const giadien = 3500;
	int A,t;
	float P,tiendien,W;
    const int  tongthoigian=24*30;
	printf("Nhap vao dien nang tieu thu:");
	scanf("%d",&A);
	printf("Nhap vao thoi gian tieu thu:");
	scanf("%d",&t);
	
	P=A/(t*3600);
	
	printf("Cong suat su dung la: %3.2f W",P);
    W=(P*(t*3600))/3600000;
	
	tiendien=tongthoigian*W*giadien;
	printf("Chi phi dien hang thang la: %3.2f dong",tiendien);
	
	
	
	return 0;
}
