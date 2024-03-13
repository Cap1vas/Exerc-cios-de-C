#include <stdio.h>

int main(){
    int p1,p2,pf,nota,final;
    printf("Insira as notas do aluno: ");
    scanf("%d %d",&p1,&p2);
    nota = (p1+p2)/2;
    if (nota>7){
        printf("Aprovado!");
    }
    else{
        printf("Final");
        scanf("%d",&pf);
        final =(pf+nota)/2;
        if (final >= 5){
            printf("Aprovado");
        }
        else{
            printf("reprovado");
        }
       
    }
}