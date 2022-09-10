#include<stdio.h>

int main(){
	char q;
	
	scanf("%c", &q);
	int ascii = q;
	 
	( ascii >= 65 &&  ascii <= 90 )? printf("majuscules") : printf("minuscules");
	
return 0;	
}
