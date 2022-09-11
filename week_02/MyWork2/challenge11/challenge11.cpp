#include<stdio.h>
void Permuter(int a, int b){
	int c=a;
	a=b;
	b=c;
	printf("a = %d \nb = %d", a, b);
}
int main(){
	int a, b;
	printf("donner a et b : ");
	scanf("%d%d", &a, &b);
	Permuter(a, b);
return 0;
}
