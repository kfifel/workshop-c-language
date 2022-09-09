#include <stdio.h>

int main()
{
    int ans ;
    double minuts, heurs, jours, seconds, mois ;
    
    printf("donne une anne : \n ");
    scanf("%d",&ans);
    
    mois = 12 ;
    if ( ( ans % 4 == 0 && ans % 400 != 0 ) || ( ans % 100 != 0 ) ){
        jours = 366 ;
        heurs = jours*24 ;
        minuts= heurs *60 ;
        seconds = minuts *60 ;
    }else{
        jours = 365 ;
        heurs = jours*24 ;
        minuts= heurs *60 ;
        seconds = minuts *60 ;
        }
	printf("mois = %lf\n", mois);
	printf("jours = %lf\n", jours);
	printf("heurs = %lf\n", heurs);
	printf("minuts = %lf\n", minuts);
	printf("seconds = %lf\n", seconds);
    return 0;
}

// 1900, 2100, 2200 et 2300.
