/*escreva uma fun��o que recebe um numero e retorna verdadeiro, caso o numero seja negativo 
ou falso caso contrario.
*/

#include <stdio.h>
#include <locale.h>

char* IsNegative(int n){ //* indicando que � ponteiro
	if(n>=0){
		return "Falso";
	}
	return "Verdadeiro";
}

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int num;
	
	printf("Fun��o Verdadeiro ou Falso\n\n");//abaixo de 0 falso, acima verdadeiro.
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	char* b = IsNegative(num);
	printf("O n�mero � negativo? %s", b); // quando for palavras usar %s;
	
	return 0;
}




