#include<stdio.h>

int main () {
	int h1, m1, s1;
	int h2, m2, s2;
	char *type;
	printf("entrer un instant HH-MM-SS ");
	scanf("%d%d%d", &h1, &m1, &s1);
	
	printf("entrer la deuxieme instant HH-MM-SS ");
	scanf("%d%d%d", &h2, &m2, &s2);
	
	if( h1 > h2 ) type = "Le premier instant vient avant le deuxieme";
	else if ( h1 < h2 ) type = "Le deuxieme instant vient avant le premier";
	else{
		if( m1 > m2 ) type = "Le premier instant vient avant le deuxieme";
		else if ( m1 < m2 ) type = "Le deuxieme instant vient avant le premier";
		else{
			if( s1 > s2 ) type = "Le premier instant vient avant le deuxieme";
			else if ( s1 < s2 ) type = "Le deuxieme instant vient avant le premier";
			else type ="Il s'agit du meme instant";
		}
	}
	
	printf("premier instants : %d h: %d min %d s \n", h1, m1, s1);
	printf("deuxieme instants : %d h: %d min %d s \n", h2, m2, s2);
	
	puts(type);
	
	
return 0;
}
