#include<stdio.h>
int main(){
	int p, n, i, j;
	printf("donner votre nombre : ");
	scanf("%d", &p);
	n = p;
		for ( i = 3; i <= p; i++) {
			for (j = 2; j < n; j++) {
				if( n % j == 0) break;
				else if( n % j != 0 ) {
					printf ("|  %d  ", n);
					break;
				}
			}
			n--;
		}
		printf ("|  2  ");
	
return 0;
}
