#include <stdio.h>

	int main() {
		float n1, n2, n3, test;
		
		printf("\nDIGITE O NUMERO 1: \n");
		scanf("%f", &n1);
		printf("\nDIGITE O NUMERO 2: \n");
		scanf("%f", &n2); 
		printf("\nDIGITE O NUMERO 3: \n");
		scanf("%f", &n3);
		
		test= n3+n2;
		
		if (n1>test)
		printf("o numero 1 eh maior,ou seja, %f>%f+%f",n1,n2,n3);
		else
		printf("o numero 1 nao eh maior,ou seja, %f<%f+%f",n1,n2,n3);
		
		return 0;
	}

		
