#include <stdio.h>

int main(){
    int N, i, r;
    scanf("%d", &N);
    for(i=1; i<=N; i++){
        r= N%i;
        if (r==0){
            printf("%d\n", i);
        }
    }
    return 0;
}