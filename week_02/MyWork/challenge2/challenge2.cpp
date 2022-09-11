#include<stdio.h>
int main(){
	int nbr_ligne, nbr_etoile, i, j, N;
	
	printf("donner le nombre des ligne : ");
	scanf("%d", &nbr_ligne);
	
	nbr_etoile = 1;
	N = nbr_ligne;
	for( i = 0; i < N; i++) {
		for( j = 0; j < nbr_ligne - 1; j++ ) printf(" ");
		for( j = 0; j < nbr_etoile; j++ ) printf("*");
		printf("\n");
		nbr_etoile+=2;
		nbr_ligne--;
		
	}
return 0;
}
