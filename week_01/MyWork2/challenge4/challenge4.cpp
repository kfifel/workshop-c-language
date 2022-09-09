#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c, d;
	
	printf("donner les cordonnees a, b, c (aX2 + bx +c = 0) de votre equations ");
	scanf("%d%d%d", &a, &b, &c);
	d = b*b - 4 * a * c;
	if(d = 0) printf("la seul solustion de votre equation est : %.2f ", (float) -b / ( 2 * a ) );
	else printf("s1 = %.2f \ns2 = %.2f", (float) ( (-b) - sqrt(d) ) / ( 2 * a ), (float) ( (-b) + sqrt(d) ) / ( 2 * a ));
return 0;
}
