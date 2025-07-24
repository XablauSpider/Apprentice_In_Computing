#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, Nf[6], Ns[6], quant=0;
    scanf("%d%d%d%d%d%d", &Nf[0], &Nf[1], &Nf[2], &Nf[3], &Nf[4], &Nf[5]);
    scanf("%d%d%d%d%d%d", &Ns[0], &Ns[1], &Ns[2], &Ns[3], &Ns[4], &Ns[5]);
    for(i=0; i<=5; i++){
        for(j=0; j<=5; j++){
            if(Nf[i]==Ns[j]){
                quant++;
            }
        }
    }
    if(quant==3){
        printf("terno\n");
    }else if(quant==4){
        printf("quadra\n");
    }else if(quant==5){
        printf("quina\n");
    }else if(quant==6){
        printf("sena\n");
    }else if(quant<3 || quant>6){
        printf("azar\n");
    }
    return 0;
}