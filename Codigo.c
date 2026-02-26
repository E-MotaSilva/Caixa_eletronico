#include <stdio.h>

int main(){
	
	float valor, saque;
	float saldo = 0, extrato[100];
	
	int opcao;
	
	printf("-- CAIXA ELETRONICO --\n");
	printf(" \n");

    do {
	printf("Qual operacao deseja realizar?\n");
	printf(" \n");
	printf("1 - Depositar\n");
	printf("2 - Sacar\n");
	printf("3 - Ver Saldo\n");
	printf("4 - Sair\n");
	printf(" \n");
    printf("-------------------\n");
	printf("Escolha uma opcao: ");
	scanf("%d", &opcao);
	printf(" \n");
		
	switch(opcao) {
		case 1:
		printf("Quanto deseja depositar?: ");
		scanf("%f", &valor);
		printf(" \n");
        
        if (valor <= 0) {
            printf("Deposito invalido, tente novamente.");
        }
        else {
            saldo += valor;
		    printf("Voce depositou: R$ %2.f\n", valor);
		    printf(" \n");
        }
		break;
		
        case 2:
		printf("Quanto deseja sacar?: ");
		scanf("%f", &saque);
		printf(" \n");

        if (saque <= 0) {
            printf("Valor solicitado invalido.\n");
        }
        else if (saque > saldo) {
            printf("Saque solicitado maior que o saldo. Tente novamente.\n");
        }
        else {
            saldo -= saque;
		    printf("Saque realizado de: R$ %2.f\n", saque);
		    printf(" \n");
        }
		break;
		
        case 3:
		printf("Seu saldo eh: R$ %2.f\n", saldo);
		printf(" \n");
		break;
		
        case 4:
        printf("Segue abaixo seu extrato:\n");



        default:
		printf("Acesso encerrado.");
	}	
	
	}
	while (opcao != 4);

		return 0;
		
}
