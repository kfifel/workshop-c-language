#include<stdio.h>
#define IP 3.14
int main(){
	float r;
	
	printf("donner le rayon de votre cercle");
	scanf("%f", &r);
	
	printf("Circonférence d'un cercle est : %.3f", 2*IP*r);
	
return 0;	
}
