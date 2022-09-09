#include<stdio.h>
int main(){
	char a;
	printf("saisez votre character : ");
	scanf("%c", &a);
	
	switch( a ) {
		case 'a' : { printf("est une voyelle"); break; }
		case 'o' : { printf("est une voyelle"); break; }
		case 'e' : { printf("est une voyelle"); break; }
		case 'i' : { printf("est une voyelle"); break; }
		case 'u' : { printf("est une voyelle"); break; }
		case 'y' : { printf("est une voyelle"); break; }
		
		default : printf("n'est pas une voyelle"); break; 
	}
return 0;
}
