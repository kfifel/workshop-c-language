#include<stdio.h>
int main(){
	float m, mile, km;
	
	printf("Voullez entrer la distance en métre");
	scanf("%f", &m);
	
	km = m / 1000;
	mile = km*1.609;
	
	printf("la distance en Mile est : %.3f", mile);
	
	return 0;
}
