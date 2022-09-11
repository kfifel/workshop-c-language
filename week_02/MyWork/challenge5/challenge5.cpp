#include<stdio.h>
int main(){
	int nombre, rest, nbr_inv, N;
	printf("Saisez Votre Nombre : ");
	scanf("%d", &nombre);
	N  = nombre;
	while(nombre){
		rest = nombre % 10 ;
		nombre /= 10;
		nbr_inv *= 10;
		nbr_inv += rest;
	}
	
	printf("invers du nombre %d  et  %d ", N, nbr_inv);
return 0;
}
