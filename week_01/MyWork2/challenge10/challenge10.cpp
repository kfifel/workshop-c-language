#include<stdio.h>
int main(){
	int jours, mois, annees;
	char *mois_name;
	printf("donner le jour : ");
	scanf("%d", &jours);
	
	printf("donner le mois : ");
	scanf("%d", &mois);
	
	printf("donner l'annees' : ");
	scanf("%d", &annees);
	again :
	switch(mois){
		case 1 : mois_name = "Janvier"; break;
		case 2 : mois_name = "Fevrier"; break;
		case 3 : mois_name = "Mars"; break;
		case 4 : mois_name = "Avril"; break;
		case 5 : mois_name = "Mai"; break;
		case 6 : mois_name = "Juin"; break;
		case 7 : mois_name = "Juillet"; break;
		case 8 : mois_name = "Aôut"; break;
		case 9 : mois_name = "Septembre"; break;
		case 10 : mois_name = "Obtober"; break;
		case 11 : mois_name = "November"; break;
		case 12 : mois_name = "Decembre"; break;
		default : printf("Donner une mois enrtre 1 et 12 "); scanf("%d", &mois); goto again;
	}
 	
 	printf("votre date est  %d-%s-%d", jours, mois_name, annees);
return 0;
}
