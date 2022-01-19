#include <stdio.h>
int main(){
	int x,y,i;
	scanf("%d%d",&x,&y);
	if(x<y){
		for(i=x;i<=y;i++)
			printf(" %d",i);
	}
	else{
		for(i=y;i<=x;i++)
			printf(" %d",i);
	}
}
