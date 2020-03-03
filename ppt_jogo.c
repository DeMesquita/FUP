#include <stdio.h>

	int main(){
		int j1, j2;
		
		printf("\nDigite 2 para pedra.");
		printf("\nDigite 4 para papel.");
		printf("\nDigite 8 para tesoura.");
		printf("\n\nJogador 1 digite sua escolha  :");
		scanf("%d",&j1);
		printf("\nJogador 2 digite sua escolha  :");
		scanf("%d",&j2);
		
		if (j1==2 && j2==4){
			printf("Jogador 2 eh o vencedor");
		} else {
		if (j1==2 && j2==8){
			printf("Jogador 1 eh o vencedor");
		} else {
		if (j1==4 && j2==8){
			printf("Jogador 2 eh o vencedor");
		}else {
		if(j1==4 && j2==2){
			printf("Jogador 1 eh o vencedor");
		}else {
		if (j1==8 && j2==4){
			printf("Jogador 1 eh o vencedor");
		}else { 
			if (j1==8 && j2==2)
			printf("Jogador 2 eh o vencedor");
		}
	}
	}
	}
	}
		return 0;
	}
