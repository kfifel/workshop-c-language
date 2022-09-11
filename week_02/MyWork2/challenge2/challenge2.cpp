#include<stdio.h>
void echanger(int a, int b){
	printf("\n------echanger-function------");
	int c;
	c=a;
	a=b;
	b=c;
	printf("\na = %d \nb = %d", a, b);
}
int main(){
	int a = 2, b = 3;
	printf("a = %d \nb = %d", a, b);
	
	echanger(a, b);
	
return 0;
}
