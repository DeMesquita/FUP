
#include<stdio.h>

int main(){
  int x,y;
	printf("\nDigite x: ");
	scanf("%d",&x);
	printf("\nDigite y: ");
	scanf("%d",&y);

	if (x == y)
	{
	printf("\n X=Y, ou seja %d=%d", x, y);
	}

	if (x > y && x != y)
	{
	printf("\nO maior valor eh %d e o menor valor eh %d ", x, y  );
	}
	else
	{
	printf("\nO maior valor eh %d e o menor valor eh %d  ", y, x);
}
	//if (x=y)

//	printf("\n X = Y, ou seja %d=%d",x,y);
	
  return 0;

}
