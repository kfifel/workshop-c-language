#include<stdio.h>
int main(){
	int t[5], i;
	int max, somme;
	for( i = 0; i < 5; i++){
		printf("\n donner le nombre numero %d qui est positive, inferieur a 100 et terminer par 0 : ", i+1);
		scanf("%d", &t[i]);
		if( t[i] % 10 != 0 || t[i] > 100 || t[i] < 0){
			printf("\n le nombre doit etre positive, inferieur a 100 et terminer par 0 ");
			i--;
		}
	}
	
	max = t[0];
	
	for( i = 0; i < 5; i++){
		somme +=t[i];
		if(t[i] > max ) max = t[i];
	}
	
	printf("\n Max = %d  |  somme = %d ", max, somme);
	
return 0;
}
