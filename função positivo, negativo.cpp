/*escreva uma função que recebe um numero e retorna verdadeiro, caso o numero seja negativo 
ou falso caso contrario.
*/

#include <stdio.h>
#include <locale.h>

char* IsNegative(int n){ //* indicando que é ponteiro
	if(n>=0){
		return "Falso";
	}
	return "Verdadeiro";
}

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int num;
	
	printf("Função Verdadeiro ou Falso\n\n");//abaixo de 0 falso, acima verdadeiro.
	printf("Digite um número: ");
	scanf("%d", &num);
	
	char* b = IsNegative(num);
	printf("O número é negativo? %s", b); // quando for palavras usar %s;
	
	return 0;
}




