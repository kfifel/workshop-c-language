#include<stdio.h>
int main(){
	char c = 'A';
	int code_asci, i;
	
	printf("saisez votre char : ");
	scanf("%c", &c);
	
	code_asci = c;
	/*  pour les test des code ASCII
	for (i = 0; i<60; i++){
		printf("%c : %d \n", c, code_asci);
		c++;
		code_asci = c;
	}
	*/
	
	// A = 65 - Z = 90
	// a = 97 - z = 122 
	if ( ( code_asci >= 65 && code_asci <= 90 ) || ( code_asci >= 97 && code_asci <= 122  ) ) {
		printf("il fait partie des alphabets ");
	}else{
		printf("il ne fait pas partie des alphabets ");
	}

	
return 0;
}
