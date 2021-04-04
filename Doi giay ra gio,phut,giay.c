#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int t;
	int a,b,c;
	printf("Nhap vao so giay ban muon:");
	scanf("%d",&t);
	a = t/3600;
	b= t/60;
	if(t%60 > 0)
	{
		c=t-a*3600-b*60;
	}
	printf("Gio ma ban can la : %d gio %d phut %d giay ",a,b,c);
	
	return 0;
}
