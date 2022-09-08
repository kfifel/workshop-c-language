#include<stdio.h>
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	
	printf("a+b : %d \n", (float) a+b);
	printf("a-b : %d\n", (float) a-b);
	printf("a*b : %d\n", (float) a*b);
	printf("a/b : %f\n", (float) a/b);
	printf("a%b : %d\n", (float) a%b);
	
	
	return 0;
}
