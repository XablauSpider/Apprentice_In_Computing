#include <stdio.h>

int main(){
    int n, i;
    double mp, v1, v2, v3;
    scanf("%d\n", &n);
    for(i=1;i<=n;i++){
        scanf("%lf%lf%lf\n", &v1, &v2, &v3);
        mp= ((v1*2)+(v2*3)+(v3*5))/10;
        printf("%.1lf", mp);
    }
    return 0;
}