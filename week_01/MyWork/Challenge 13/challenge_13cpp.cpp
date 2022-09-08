#include<stdio.h>


//int toHixa( int n ) {
//	int toHixa, a, b;
//	while( n ) {
//		
//	}
//}

int toOctale( int n ) {
	int toOctale, rest,a;
	while( n>0 ) {
		rest = n % 8;
		printf("%d\n",rest);
		n /= 8;
		a = (rest *j) + rest;
		toOctale += rest;
	}
	return toOctale;
}

int main() {
	printf("6 to octale = %d ", toOctale(85) );
	return 0;
}

