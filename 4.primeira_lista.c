#include <stdio.h>

	int main() {
		float n1, n2, soma, mult, div;
		printf("\nDIGITE O NUMERO 1: \n");
		scanf("%f", &n1);
		printf("\nDIGITE O NUMERO 2: \n");
		scanf("%f", &n2); 
		
		soma= n1+n2;
		mult=n1*n2;
		div=n1/n2;
		
		printf("\n A SOMA DE %f, %f EH: %f\n",n1,n2,soma);
		printf("\n O PRODUTO DE %f, %f EH: %f\n",n1,n2,mult);
		printf("\n O QUOCIENTE DE %f, %f EH: %f\n",n1,n2,div);
		
		return 0;
}
