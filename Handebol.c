#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, numj, nump, jogos[100], gols=0, jogador=0;
    do{
    scanf("%d%d", &numj, &nump);
    }while(numj<1 || numj>100 || nump<1 || nump>100);
    for(i=0; i<numj; i++){
        for(int j=0; j<nump; j++){
            scanf("%d", &jogos[j]);
            if(jogos[j]>0){
                gols++;
            }
        }
        if(gols==nump){
            jogador++;
        }
        gols=0;
    }
    printf("%d\n", jogador);
    return 0;
}