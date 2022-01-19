#include <stdio.h>
#include <string.h>

int main(){
    char s[30];
    int i = 0, tamanho = 0;
    gets(s);
    tamanho = strlen(s);
    for(i = 0; i < strlen(s); i++){
        if(s[i] == ' '){
            tamanho--;  
        }  
    }
    printf("%d",tamanho);
}
	
