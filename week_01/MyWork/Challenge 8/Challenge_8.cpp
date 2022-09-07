#include<stdio.h>
int main(){
	int a, b, c, d;
	printf("Donner les 4 nombres : ");
	scanf("%d%d%d%d",  &a, &b, &c, &d);
	
	printf("la moyenne des nombes est : %.3f", (float) ( a + b + c + d ) / 4 );
	return 0; 
}
