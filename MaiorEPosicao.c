#include <stdio.h>

int main(){
    int n, mv=0, pg=0, i=1, p;
    do{
        scanf("%d", &n);
        pg++;
        if(mv<n){
            mv=n;
            p=pg;
        }
        i++;
    }while(i<=100);
    printf("%d\n%d\n", mv, p);
    return 0;
}