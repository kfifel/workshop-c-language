#include<stdio.h>
int main(){
	int base, puiss, resultat = 1, i;
	do {
	printf("donner votre nombre (different de 0 ) et ça puissance ( puissance positif )");
	scanf("%d%d", &base, &puiss);
	}while( base <= 0 || puiss < 0);
	i = puiss ;
	// a3 a*a*a 3 fois
	while(i){
		resultat *= base;
		i--;
	}
	printf("%d puissence de %d =  %d ", base, puiss, resultat);
return 0;
}
