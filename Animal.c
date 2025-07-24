#include <stdio.h>
#include <string.h>

int main(){
    char ani1[15], ani2[15], ani3[15], resp;
    do{
    scanf("%s", ani1);
    if(strcmpi(ani1, "vertebrado")==0){
        scanf("%s", ani2);
        if(strcmpi(ani2, "ave")==0){
            scanf("%s", ani3);
            if(strcmpi(ani3, "carnivoro")==0){
                printf("aguia\n");
            }else{
                printf("pomba\n");
            }
        }else{
            scanf("%s", ani3);
            if(strcmpi(ani3, "onivoro")==0){
                printf("homem\n");
            }else{
                printf("vaca\n");
            }
        }
    }else{
        scanf("%s", ani2);
        if(strcmpi(ani2, "inseto")==0){
            scanf("%s", ani3);
            if(strcmpi(ani3, "hematofago")==0){
                printf("pulga\n");
            }else{
                printf("lagarta\n");
            }
        }else{
            scanf("%s", ani3);
            if(strcmpi(ani3, "hematofago")==0){
                printf("sanguessuga\n");
            }else{
                printf("minhoca\n");
            }
        }
    }
    printf("Quer tentar novamente? s(sim) n(nao):");
    scanf(" %c", &resp);
    }while(resp=='s');
    return 0;
}