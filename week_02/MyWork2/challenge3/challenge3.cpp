#include<stdio.h>

bool isPremier(int a) {
	for(int i = 0; i < a; i++){
		if( a == 0 || a == 1 ) return false;
		else {
			for( int j = 2; j < a; j++){
				if( a%j == 0) return false;
				else return true;
			}
		}
	}
}

int main(){
	int a;
	printf("donner un nombre");
	scanf("%d", &a);
	isPremier(a)? printf("%d est premier", a) : printf("%d n'est pas premier", a);
	
return 0;
}
