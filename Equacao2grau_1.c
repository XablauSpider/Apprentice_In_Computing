#include <stdio.h>
#include <math.h>

int main(){
	double a, b, c;
	double delta;
	double x1, x2;
	printf("Digite os coeficientes a, b e c: ");
	scanf("%lf%lf%lf", &a, &b, &c);
	if (a==0){
		printf("Nao eh uma equacao do 2 grau\n");
	}else{
		delta = b*b - 4*a*c;
		if (delta<0){
			printf("Nao ha raizes reais\n");
		}
		if(delta==0){
			x1 = -b/(2*a);
			printf("Ha duas raizes reais e iguais a %.2lf\n", x1);
		}
		if (delta>0){
			x1 = (-b + sqrt(delta))/(2*a);
			x2 = (-b - sqrt(delta))/(2*a);
			printf("Ha duas raizes reais e diferentes: %.2lf e %.2lf\n", x1, x2);
		}	   
	}	
	return 0;	
}