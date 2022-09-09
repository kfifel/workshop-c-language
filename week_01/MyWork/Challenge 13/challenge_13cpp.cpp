#include<stdio.h>
//
//int toOctale( int n ) {
//	int toOctale, rest,a;
//	while( n>0 ) {
//		rest = n % 8;
//		printf("%d\n",rest);
//		n /= 8;
//		a = (rest *j) + rest;
//		toOctale += rest;
//	}
//	return toOctale;
//}

int main() {
	int a;
	
	printf("saissez votre nemuro");
	scanf("%d", &a);
	
	printf("( %d )10 = ( %o )8 \n", a, a) ;
	printf("( %d )10 = ( %x )16 ", a, a) ;
	return 0;
}

