#include<stdio.h>
int main(){
	float F, C;
	printf("Donner la température en Fahrenheit : ");
	scanf("%f", &F);
	C = (F-32)/1.8;
	printf("La température en degré Celsius est : %.3f", C);
	
return 0;
}
