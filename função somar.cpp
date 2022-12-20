/*fa�a um programa com uma fun��o que receba dois parametros inteiros, soma-se e retorna a soma.
o programa deve ler da entrada padrao dois numeros, chamar a fun��o passando os numeros lidos 
como argumentos e depois imprimir a resposta de acordo com o valor de retorno da fun��o.
*/

#include <stdio.h>
#include <locale.h>

float somar(float a, float b);

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float a, b, s;
	
	printf("Soma de dois valores\n");
	printf("A f�rmula da soma �: A + B\n\n");
	printf("Digite o primeiro n�mero: ");
	scanf("%f", &a);
	
	printf("Digite o segundo n�mero: ");
	scanf("%f", &b);
	
	s = somar(a, b);
	
	printf("A soma dos n�meros �: %.2f", s); 
	
	return 0;
}

float somar(float a, float b){
	return a + b;
}
