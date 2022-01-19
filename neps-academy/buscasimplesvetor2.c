#include <stdio.h>
int main(){
	int vetor[5];
	int i,cont=0,x;
	int posi=0;
	for(i=0;i<5;i++){
		scanf("%d",&vetor[i]);
	}
	scanf("%d",&x);
	for(i=0;i<5;i++){
		if(x!=vetor[i])
		printf("nao");
		break;
	}
	for(i=0;i<5;++){
		if(vetor[i]==x)
		cont++;
		posi=i;
	}
	for(i=0;i<5;i++){
		
	}
		
	}
}
