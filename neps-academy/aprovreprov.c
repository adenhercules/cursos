#include <stdio.h>
int main(){
	float media, r1,r2;
	
	scanf("%f\n%f",&r1,&r2);
	media=((r1*2)+(r2*3))/5;
	if (media<3)
		printf("Reprovado");
		else if(media >=7)
			printf("Aprovado");
			else printf("Final");
}
