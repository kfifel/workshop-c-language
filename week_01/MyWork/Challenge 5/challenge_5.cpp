#include<stdio.h>
int main(){
	float F, c;
	printf("donner la temperature en Fahrenheit");
	scanf("%f", &F);
	c = ( F - 32 ) / 1.8;
	
	//testing la température
	if( c > 28 && c < 34 ) printf("il fait chaud");
	if( c > 34 ) printf("il fait tres chaud");
	if( c < 28 && c > 10 ) printf("il fait froid");
	if( c < 10 ) printf("il fait tres froid");
	
}
