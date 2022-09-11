#include<stdio.h>
#include<stdlib.h>
int main(){
	int *t, i, N, v_recherche;
	
	printf("donner la taille du tableau : ");
	scanf("%d", &N);
	
	t = (int *) malloc ( N * sizeof(int));
	
	for( i = 0; i < N; i++) {
		printf("\ndonner l'element %d : ", i+1);
		scanf("%d", &t[i]);
	}
	
	printf("\nsaisez la valeur a rechercher : ");
	scanf("%d", &v_recherche);
	
	for( i = 0; i < N; i++){
		if( v_recherche == t[i]){
			printf("\nla position de %d sur le tableau est %d", v_recherche, i+1);
			break;
		}
	}
	
return 0;
}
