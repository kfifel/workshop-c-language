#include<stdio.h>
int main(){
	float m, mile, km;
	
	scanf("%f", &m);
	
	km = m / 1000;
	mile = km*1.609;
	
	printf("%.3f", mile);
	
	return 0;

}
