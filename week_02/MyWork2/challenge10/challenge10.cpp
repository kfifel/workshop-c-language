#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void Affiche_Carre(int *t, int N){
	for(int i = 0; i < N; i++){
		t[i] = pow( t[i] , 2);
		printf("| %d ", t[i]);
	}
}
int main(){
	int *t, N;
	printf("donner la taille de votre tableau : ");
	scanf("%d", &N);
	
	t = (int*) malloc( N * sizeof(int));
	
	for(int i =0; i < N; i++) {
		printf("donner l'elemet %d : ", i+1);
		scanf("%d", &t[i]);
	}
	
	Affiche_Carre(t, N);
	
return 0;
}
