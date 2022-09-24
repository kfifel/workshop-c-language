#include<stdio.h>
#include<time.h>
#include<stdlib.h>
main(){
	int a;
	time_t  t;
	srand((unsigned) time(&t));
	
	a =(rand() % 9)+1;
	printf("%d", a);
}

