#include<stdio.h>
int main(){
	int p,  i, j,k=0;
	
	printf("donner votre nombre : ");
	scanf("%d", &p);
	printf("| 1 ");
		for ( i = 2; i <= p; i++) {
			k=0;
			for (j = 2; j < i; j++) {
				if( i % j == 0) 
				   k++;
				}
					if(!k)printf("|  %d ",i);
			}
}
	
