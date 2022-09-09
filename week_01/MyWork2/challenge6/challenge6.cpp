#include<stdio.h>
int main(){
	int a;
	
	printf("saisez votre nombre : ");
	scanf("%d", &a);
	
	if ( a > 0 ) 	  printf("le nombre est positive");
	else if ( a < 0 ) printf("le nombre est negative");	
	else 		  printf("le nombre est NULL");
return 0;
}
