#include<stdio.h>
int main(){
	
	char nome ;
	double salario,vendas,TOTAL;
	
	scanf("%s", &nome);
	scanf("%lf", &salario);
	scanf("%lf", &vendas);
	
  TOTAL = salario+vendas*15/100;  
    printf("TOTAL = R$ %.2lf\n",TOTAL);
		
	return 0;
}