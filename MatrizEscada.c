#include <stdio.h>
#define L 500
#define C 500

int lematriz(int matriza[L][C], int a, int b){
    int i, j;
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            scanf("%d", &matriza[i][j]);
        }
    }
}

int verificaMatriz(int matrizb[L][C], int a, int b){
    int i, j, k, l, num, verifica=0;
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            if(matrizb[i][j]>0){
                for(k=i+1; k<a; k++){
                    if(k==a){
                        break;
                    }
                    if(matrizb[k][j]==0){
                        num++;
                    }
                    if(num==a-1){
                        num=0;
                    }else{
                        return 0;
                    }
                }
                if(j==0){
                    break;
                }else{
                    for(l=i; l<a; l++){
                        if(matrizb[l][j-1]==0){
                            num++;
                        }
                        if(num==a-1){
                            num=0;
                        }else{
                            return 0;
                        }
                    }
                }
                verifica++;
                break;
            }
        }
    }
    if(verifica==a){
        return 1;
    }
}

int main(){
    int l, c, matriz[L][C], resp;
    scanf("%d%d", &l, &c);
    lematriz(matriz, l, c);
    resp=verificaMatriz(matriz, l, c);
    if(resp==1){
        printf("S\n");
    }else{
        printf("N\n");
    }
    return 0;
}