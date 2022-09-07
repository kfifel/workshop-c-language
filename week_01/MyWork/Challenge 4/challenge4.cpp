#include<stdio.h>
int main(){
	float mile, m;
	printf("voullez saisez le distance en Mile");
	scanf("%f", mile);
	m = mile / 1.609 * 1000;
	printf("la distance en Metre est : %.4f", m);
	return 0;
}
