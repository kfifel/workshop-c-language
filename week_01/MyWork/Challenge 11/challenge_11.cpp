#include<stdio.h>
int main(){
	float longueur, largeur;
	printf("Saissez la longueur et la largeur de votre rectangle");
	scanf("%f%f", &longueur, &largeur);
	
	printf("la Circonférence de votre rectangle est : %.3f",  2 * ( longueur + largeur ) );
return 0;
}
