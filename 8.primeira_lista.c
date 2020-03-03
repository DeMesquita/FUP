#include <stdio.h>

	int main() {
		float vmot, vmp;
		
		printf("\nDIGITE A VELOCIDADE MAXIMA PERMITIDA: \n");
		scanf("%f", &vmp);
		printf("\nDIGITE A VELOCIDADE DO MOTORISTA \n");
		scanf("%f", &vmot);
		
		if(vmot>=vmp+10){
			printf("\nVOCE FOI MULTADO EM 50 REAIS");
		}else{ 
		if (vmot>=vmp+30){
			printf("\nVOCE FOI MULTADO EM 100 REAIS");
		}else{
		if (vmot>=vmp+31){
			printf("\nVOCE FOI MULTADO EM 200 REAIS");
		}
	}
}

return 0;
}
