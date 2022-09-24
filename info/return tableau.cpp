#include<stdio.h>
#include<stdlib.h>
int *echange(int a, int b, int *res){
	int c = a;
		a = b;
		b = c;
		*res = a;
		*(res+1) = b;
return res;
}

main(){
	int a = 1, b = 2, *t;
	t = (int *)malloc(2*sizeof(int));
	
	t = echange(a, b, t);
	printf(" main  a = %d  b = %d", *t, *(t+1));
}
