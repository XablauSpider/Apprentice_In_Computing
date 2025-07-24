#include <stdio.h>

int main(){
    int hi, hf, tm, ht, tj;
    scanf("%d%d", &hi, &hf);
    tm=24*60;
    if(hi>hf){
        tj=(hi-hf)*60;
        ht=(tm-tj)/60;
        printf("O JOGO DUROU %d HORA(S)\n", ht);
    }
    if(hf>hi){
        tj=(hf-hi);
        printf("O JOGO DUROU %d HORA(S)\n", tj);
    }
    if(hi==hf){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    return 0;
}