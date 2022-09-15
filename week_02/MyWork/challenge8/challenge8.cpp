#include<stdio.h>
#include<math.h>

float f(float x);

int main(){
	float a= -15, b=-10, m;
	
	while( b-a > 0.00001){
		m = (a+b)/2;
		if( f(a) * f( m ) < 0 ){
			b = m;
		}else{
			a = m;
		}
	}
	printf("l'intervale des solutions est : [%.6f, %.6f]", a, b);
return 0;
}

float f(float x) {
return pow(x,3)+12*pow(x, 2)+1;
}
