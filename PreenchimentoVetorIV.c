#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j=0, k=0, n, par[5], imp[5], p, im;
    for(i=0; i<15; i++){
        scanf("%d", &n);
        if(n%2==0){
            par[j]=n;
            j++;
        }else{
            imp[k]=n;
            k++;
        }
        if(j==5){
            for(p=1; p<=j; p++){
                printf("par[%d] = %d\n", p-1, par[p-1]);
            }
            j=0;
        }
        if(k==5){
            for(im=1; im<=k; im++){
                printf("impar[%d] = %d\n", im-1, imp[im-1]);
            }
            k=0;
        }
    }
    for(i=0; i<k; i++){
        printf("impar[%d] = %d\n", i, imp[i]);
    }
    for(i=0; i<j; i++){
        printf("par[%d] = %d\n", i, par[i]);
    }
    return 0;
}