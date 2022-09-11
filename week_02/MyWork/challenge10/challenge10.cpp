#include <stdio.h>

int main() {
	int t[10], n, i, somme = 0;
	
	do{	
		printf("combien des nombres bous voullez saisez? (max 10) :");
		scanf("%d", &n);
	}while( n > 10 || n < 0);
	
	for ( i =0; i < n; i++) {
		printf("Donner le nombre %d : ", i+1);
		scanf("%d", &t[i]);
	}

	for( i = 0; i < n; i++){
		if( t[i] >= 0 )  
			somme +=t[i];	
	}
	
	printf("la somme (avec l'elimination des nombres negatives) est : %d", somme);
	 
    return 0;
}
