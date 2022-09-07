#include<stdio.h>
#include<math.h>
int main(){
	int x1, y1, x2, y2;
	printf("donner les coordonnées de votre premier point a : ");
	scanf("%d%d", &x1, &y1);
	printf("donner les coordonnées de votre premier point b: ");
	scanf("%d%d", &x2, &y2);
	
	printf("la distance entre les deux point a et b est : %.3f", (float) sqrt(pow( x2 - x1, 2) + pow( y1 - y2, 2) )  );
	
	return 0; 
}
