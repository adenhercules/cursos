#include <stdio.h>

int fibonaci(int n){
	if(n==0||n==1)
		return 1;
		
		return fibonaci(n-1)+fibonaci(n-2);
	
}

int main(){
	int num;
	scanf("%d",&num);
	printf("%d",fibonaci(num));
}
