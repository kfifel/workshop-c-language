#include<stdio.h>
int main(){
	float F, C;
	printf("Donner la temp�rature en Fahrenheit : ");
	scanf("%f", &F);
	C = (F-32)/1.8;
	printf("La temp�rature en degr� Celsius est : %.3f", C);
	
return 0;
}
