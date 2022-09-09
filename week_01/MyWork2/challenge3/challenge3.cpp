#include<stdio.h>
int main(){
	int a, b;
	
	printf("donner les deux nombre a et b : ");
	scanf("%d%d", &a, &b);
	
	if( a == b ) printf("%d", ( a + b ) * 3);
	else printf("%d", a + b);
	
return 0;
}
