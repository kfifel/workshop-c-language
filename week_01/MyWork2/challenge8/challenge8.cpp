#include<stdio.h>
int main(){
	float note;
	
	printf("Saisez votre notes : ");
	scanf("%f", &note);
	if      ( note < 10 && note >= 0 ) printf("vous etes recalé");
	else if ( note > 10 && note < 12 ) printf("mention passable");
	else if ( note > 12 && note < 14 ) printf("mention assez bien");
	else if ( note > 14 && note < 16 ) printf("mention bien");
	else if ( note > 16 && note <= 20) printf("mention tres bien");
	else printf("la note doit etre entre 0 et 20 ");
	
return 0;
}
