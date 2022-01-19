#include <stdio.h>
int main(){
	int i, x;
	scanf("%d", &x);
	for(i=1;i<=10;i++)
		printf("\n%d * %d = %d",x,i,x*i);
}
