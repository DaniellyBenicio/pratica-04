//escreve uma fun��o que recebe um numero como parametro e retorna o fatorial deses numero.

#include <stdio.h>
#include <locale.h>

int fatorial (int n){
	int fat = 1;
	for(int i=n; i>1; i--){
		fat*= i;
	}
	return fat;
}

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int num, f; 
	
	printf("Fun��o fatorial\n\n");
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	f = fatorial(num);
	
	printf("\nO fatorial de %d! �: %d", num, f);
	
	return 0;
}
