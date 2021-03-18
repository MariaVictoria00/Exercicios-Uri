#include<stdio.h>

int main (){
	int H,Km;
	double vm,litrosnecessarios;

	scanf("%d %d",&H,&Km);
	
	vm=H*Km;
	litrosnecessarios = vm/12;
	
	printf("%.3lf\n",litrosnecessarios);
	
	return 0;	
}
	