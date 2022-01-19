#include <stdio.h>
int main(){
	int h=60;
	int x;
	int m;
	scanf("%d",&x);
	if(x<h){
		h=0;	
		printf("%d",h);
		printf("\n%d",x);
	}
	else{
		h=x/60;
		m=x%60;
		printf("%d",h);
		printf("\n%d",m);
	}
}
