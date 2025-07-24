#include <stdio.h>
#include <stdlib.h>

float media(float n1, float n2, float n3, float n4){
    float m;
    m= (n1*2+n2*3+n3*4+n4*1)/10.0;
    return m;
}

int main(){
    float a, b, c, d, e, r;
    scanf("%f%f%f%f", &a, &b, &c, &d);
    r=media(a, b, c, d);
    if(r>=7.0){
        printf("Media: %.1f\n", r);
        printf("Aluno aprovado\n");
    }else if(r<5.0){
        printf("Media: %.1f\n", r);
        printf("Aluno reprovado\n");
    }else if(r>=5.0 && r<=6.9){
        printf("Media: %.1f\n", r);
        printf("Aluno em exame.\n");
        scanf("%f", &e);
        r=(r+e)/2;
            if(r>=5.0){
                printf("Nota do exame: %.1f\n", e);
                printf("Aluno aprovado\n");
                printf("Media final: %.1f\n", r);
            }else if(r<=4.9){
                printf("Nota do exame: %.1f\n", e);
                printf("Aluno reprovado\n");
                printf("Media final: %.1f\n", r);
            }
        }
    return 0;
}