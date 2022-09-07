#include<stdio.h>
int main(){
	float Celsius, Fahrenheit;
	
	printf("Donner la temperature en Fahrenheit");
	scanf("%f", &Fahrenheit);
	
	Celsius = ( Fahrenheit - 32 ) / 1.8 ;
	
	printf("%.4f F= %.4f °C",Fahrenheit, Celsius);
	return 0;
}
