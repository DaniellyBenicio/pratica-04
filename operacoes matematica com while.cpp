#include <stdio.h>
#include <locale.h>

int somar(int a, int b);
int subtrair(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);

void menu(){
	printf("Operações Matemáticas\n\n");
	
	printf("\n\n __________________ \n");
	printf("|    OPERAÇÕES     |\n");
	printf("|__________________|\n");
	printf("| 1 - Soma	   |\n");
	printf("| 2 - Subtração	   |\n");
	printf("| 3 - Multiplicação|\n");
	printf("| 4 - Divisão	   |\n");
	printf("|__________________|\n");
	printf("| 0 - Encerrar	   |\n");
	printf("|__________________|\n\n");
	printf("Escolha uma operação: ");
}

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
		
	int op=1, n1, n2, r;
	float rf;
	
	while(op == 1){
		
		menu();
		scanf("%d", &op);
			if(op== 1 || op == 2 || op == 3 || op == 4){ // ou (op !0)
			printf("Digite o primeiro número: ");
			scanf("%d", &n1);
			printf("DIgite o segundo número: ");
			scanf("%d", &n2);
		}
			
		switch (op){
			case 1:
				r = somar(n1, n2);
				printf("Resultado = %d", r);
				break;
			case 2:
				r = subtrair(n1, n2);
				printf("Resultado = %d", r);
				break;
			case 3: 
				r = multiplicar(n1, n2);
				printf("Resultado = %d", r);
				break;
			case 4: 
				rf = dividir(n1, n2);
				printf("Resultado = %.2f", rf);
				break;
			case 0:
				printf("Programa encerrado\n");
				return 0;
				break;
			default://caso padrão. Opção acionado se nenhuma das opções acimas forem solicitadas.
				printf("Opção inválida\n");				
		}
		
		printf("\n\nDeseja realizar outra operação?\n");
		printf("0 - Não	1 - Sim: ");
		scanf("%d", &op);	
	}
		
	return 0;
}

int somar(int a, int b){
	return a + b;
}

int subtrair(int a, int b){
	return a - b;
}

int multiplicar(int a, int b){
	return a * b;
}

float dividir(int a, int b){
	return (float)a/b;
}

