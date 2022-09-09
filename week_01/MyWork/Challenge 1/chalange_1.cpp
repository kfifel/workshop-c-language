#include<stdio.h>
int main(){
	int age;
	char nom[15], prenom[15], Tele[15];
	
	printf("Donner respectivement votre nom, prenom, age et Telephone");
	scanf("%s %s %d %s", &nom, &prenom, &age, &Tele);
	printf("-------------------------------------------------\n");
	printf(" Nom : %s \n Prenom : %s \n Age : %d ans \n Numero de Telephone : %s", nom, prenom, age, Tele);
return 0;
}
