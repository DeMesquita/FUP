#include <stdio.h>

	int main() {
		float n1, n2, n3, media;
		
		printf("\nDIGITE A NOTA 1: \n");
		scanf("%f", &n1);
		printf("\nDIGITE A NOTA 2: \n");
		scanf("%f", &n2); 
		printf("\nDIGITE A NOTA 3: \n");
		scanf("%f", &n3);
		
		media=(n1+n2+n3)/3;
		
		if (media>=7){
		printf("\nA sua media eh %f e voce esta APROVADO.\n", media);
		}else{
		if (media<5){
		printf("\nA sua media eh %f e voce esta REPROVADO.\n", media);
		}else{
		printf("\nA sua media eh %f e voce esta de RECUPERACAO.\n", media);
		}	
		}
return 0;		
}
