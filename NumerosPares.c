#include <stdio.h>

int main(){
    int i, r;
    for(i=1;i<=100;i++){
        r=i%2;
        if(r==0){
            printf("%d\n", i);
        }
    }
    return 0;
}