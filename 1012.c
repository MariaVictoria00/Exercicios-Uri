#include<stdio.h>
int main(){
	double A,B,C,area,raio,areatrapezio,areaquadrado,arearetangulo;
	
	scanf("%lf %lf %lf", &A,&B,&C);
	
	area = (A*C)/2;
	printf("TRIANGULO: %.3lf\n", area);
	
	raio = 3.14159*(C*C);
	printf("CIRCULO: %.3lf\n",raio);
	
	areatrapezio = (A+B)*C/2;
	printf("TRAPEZIO: %.3lf\n",areatrapezio);
	
	areaquadrado = B*B;
	printf("QUADRADO: %.3lf\n",areaquadrado);
	
	arearetangulo = A*B;
	printf("RETANGULO: %.3lf\n",arearetangulo);
	
	return 0; 
	
}