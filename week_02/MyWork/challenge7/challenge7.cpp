#include<stdio.h>
#include<stdlib.h>
int main(){
	double *u, n;
	int i;
	printf("Donner n : ");
	scanf("%lf", &n);
	u = (double *) malloc( n * sizeof(double));
	u[0] = u[1] = 1;
	
	for( i = 2; i <= n; i++){
		u[i]= u[i-1] + u[i-2];
		if( i == n ) printf(" U%d = %0.lf", i, u[i]);
	}
	
return 0;
}
