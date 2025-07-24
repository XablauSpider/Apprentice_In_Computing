#include <stdio.h>

int main(){
    int i, n, c1, c2, cl2, cl3;
    scanf("%d", &n);
    for (i=1;i<=n;i++){
        c1= i*i;
        c2= i*i*i;
        cl2= c1+1;
        cl3= c2+1;
        printf("%d %d %d\n", i, c1, c2);
        printf("%d %d %d\n", i, cl2, cl3);
    }
}