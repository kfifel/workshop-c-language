#include<stdio.h>
#include<stdlib.h>

void set(int n, int pos, int *T);

int main(){
	int t[10] = { 1, 2, 3, 4, 6}, *p, pos, n, i;
	p = &t[0];
	
	// affecher le continue de tableau
	// for index
	for( i =0; i < 5; i++)
	printf("| %d ", i+1);
	printf("|\n");
	// for ligne
	for( i =0; i < 5; i++)
	printf("----");
	printf("\n");
	
	for( i =0; i < 5; i++)
	printf("| %d ", t[i]);
	printf("|\n");
	
	
	printf("Inserer un nombre ");scanf("%d", &n);
	do{	
	printf("Donner la position de votre insertions entre 1 et 10 : ");
	scanf("%d", &pos);
	}while(pos > 10 || pos < 0);
	
	set(n, pos-1, t);
	
	for( i =0; i < 6; i++)
	printf("| %d ", t[i]);
	printf("|\n");
	
return 0;	
}


void set(int n, int pos, int *T){
	int i, cn;
	
for(i = pos; i < 6; i++){
	cn = T[i];
	T[i] = n;
	n=T[i+1];
	T[i+1] = cn;
	i++;
}
	
	
	
}
