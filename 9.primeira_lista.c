#include <stdio.h>

	int main() {
		float n1, n2, n3;
		
		printf("\nDIGITE O NUMERO 1: \n");
		scanf("%f", &n1);
		printf("\nDIGITE O NUMERO 2: \n");
		scanf("%f", &n2); 
		printf("\nDIGITE O NUMERO 3: \n");
		scanf("%f", &n3);
		if (n1<=n2 && n2<=n3){
			printf(" %f, %f, %f", n1,n2,n3);
		} else {
		if (n2<=n1 && n2<=n3){
			printf(" %f, %f, %f", n2,n1,n3);
		} else {
		if (n3<=n1 && n2<=n1){
			printf(" %f, %f, %f", n3,n2,n1);
		}else {
		if(n1<=n3 && n3<=n2){
			printf(" %f, %f, %f", n1,n3,n2);
		}else {
		if (n2<=n3 && n3<=n1){
			printf(" %f, %f, %f", n2,n3,n1);
		}else { 
			if (n3<=n1 && n1<=n2)
			printf(" %f, %f, %f", n3,n1,n2);
		}
	}
	}
	}
	}
		
		return 0;
	}
