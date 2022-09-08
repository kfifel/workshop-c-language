#include<stdio.h>
int main(){
	int number,  number_inv = 0, N;
	
	printf("saisez votre nombre");
	scanf("%d", &number);
	
	while(number){
		N = number % 10;
		number /= 10; 
		number_inv *= 10;
		number_inv += N;
	}
	printf("%d", number_inv);
	return 0;
}
