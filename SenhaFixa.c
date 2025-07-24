#include <stdio.h>

int main(){
    int senhav=3135235, senha;
    do{
        scanf("%d", &senha);
        if(senha!=senhav){
            printf("Senha Invalida\n");
        }else{
            printf("Acesso Permitido\n");
        }
    }while(senha!=senhav);
    return 0;
}