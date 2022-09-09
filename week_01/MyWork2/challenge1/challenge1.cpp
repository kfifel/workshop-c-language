#include<stdio.h>
int main(){
	int a;
	
	printf("saisez votre nombre : ");
	scanf("%d", &a);
	
	if( ( a % 2 ) == 1) printf("impaire");
	else printf("%d est : paire", a);
return 0;
}
