#include<stdio.h>
#include<math.h>

int main(){
	int x1, y1, x2, y2, px, py, Long_extremitesXY, Long_extremitesPX, Long_extremitesPY, i;
	printf("donner les cordonnees des deux extremites de votre segment X(x1, y1) Y(x2, y2): ");
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	Long_extremitesXY = sqrt( pow( x2-x1, 2 ) + pow( y2-y1, 2 ) );
	
	//tracer le segment (par curieusité
	printf("\nX");
	for( i = 0; i < Long_extremitesXY; i++)printf("-");
	printf("Y\n");
	
	// insertion du nv point
	printf("saisez les cordonnes de votre point : ");
	scanf("%d%d", &px, &py);
	Long_extremitesPX = sqrt( pow( x1-px, 2 ) + pow( y1-py, 2 ) );
	Long_extremitesPY = sqrt( pow( x2-px, 2 ) + pow( y2-py, 2 ) );
	if( Long_extremitesXY == Long_extremitesPX + Long_extremitesPY ) printf("votre point se trouve sur le segment");
	else printf("votre point ne se trouve pas sur le segment");
return 0;
}
