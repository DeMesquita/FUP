#include <stdio.h>

	int main() {
		int a,b;
		
		printf("\nDIGITE O NUMERO A: \n");
		scanf("%d", &a);
		printf("\nDIGITE O NUMERO B: \n");
		scanf("%d", &b);
		
		if (a==b){
		printf("\n A=B \n"); 
		}else{
		if (a>b){
		printf("\n A eh maior que B \n");
		}else{
			printf("\n A eh menor que B \n"); 
		}
	}
 return 0;		
}
