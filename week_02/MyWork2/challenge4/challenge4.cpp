#include<stdio.h>
#include<stdlib.h>

float divededby(int a, int b) {
	if( b == 0){
		printf("impossible de diviser par 0");
		exit(1);
		return 0;
	}else
		return (float) a / b;
}
int main(){
	int a, b;
	printf("donner deux nombre ");
	scanf("%d%d", &a, &b);
	
	printf("%d / %d = %.3f", a, b, divededby(a, b));

return 0;
}
