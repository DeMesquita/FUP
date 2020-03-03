#include <stdio.h>

	int main() {
		float valc, z, qtdc, y, anos, x, result;		
		printf("\n HA QUANTOS ANOS FUMA?\n");
		scanf("%f", &x);
		printf("\nDIGITE o NUMERO DE CIGARROS CONSUMIDOS DIARIAMENTE: \n");
		scanf("%f", &y);
		printf("\nDIGITE O VALOR DA SUA CARTEIRA DE CIGARRO:\n");
		scanf("%f", &z);
		
		anos=x*365;
		qtdc=y/20;
		valc=z;
		
		result=(anos*qtdc*valc);
		
		printf("\nVOCE JA GASTOU %f REAIS EM CIGARROS",result); 
return 0;		
}

