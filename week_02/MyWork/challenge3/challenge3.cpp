#include<stdio.h>
int main(){
	int a, i;
	printf("donner votre nombre");
	scanf("%d", &a);
	
	if( a == 1 || a == 0 ) printf("%d n'est pas premier ", a);
	else {
		for( i = 2; i < a; i++){
			if( a%i == 0){
				printf("%d n'est pas premier", a);
				break;
			}
			else {
			 	printf("%d est premier", a);
			 	break;
			}
		}
	}
return 0;
}
