/*faça um programa com uma função que receba dois parametros inteiros, soma-se e retorna a soma.
o programa deve ler da entrada padrao dois numeros, chamar a função passando os numeros lidos 
como argumentos e depois imprimir a resposta de acordo com o valor de retorno da função.
*/

#include <stdio.h>
#include <locale.h>

float somar(float a, float b);

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float a, b, s;
	
	printf("Soma de dois valores\n");
	printf("A fórmula da soma é: A + B\n\n");
	printf("Digite o primeiro número: ");
	scanf("%f", &a);
	
	printf("Digite o segundo número: ");
	scanf("%f", &b);
	
	s = somar(a, b);
	
	printf("A soma dos números é: %.2f", s); 
	
	return 0;
}

float somar(float a, float b){
	return a + b;
}
