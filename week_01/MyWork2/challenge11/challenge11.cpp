#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(){
	x:
	srand( time(NULL) );
	int a = rand()%8;
	printf("%d ", a);
	switch (a){
		case 1 : printf("Lundi"); break;
		case 2 : printf("Mardi"); break;
		case 3 : printf("Mercredi"); break;
		case 4 : printf("Jeudi"); break;
		case 5 : printf("Vendredi"); break;
		case 6 : printf("Samedi"); break;
		case 7 : printf("Dimanche"); break;
		default: goto x; //printf("le jour de semain de votre chois n'exist pas'"); break;
	}
	
return 0;
}
