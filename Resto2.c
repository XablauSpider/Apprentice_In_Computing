#include <stdio.h>

int main(){
    int n, r, i;
    scanf("%d", &n);
    if(n<10000 && n>1){
        for(i=1.0;i<=10000;i++){
            r=i%n;
            if(r==2)
                printf("%d\n", i);
        }
    }
}