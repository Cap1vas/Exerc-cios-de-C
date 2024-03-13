#include <stdio.h>

int main(){

int mat[4][4],i,j,l,c;

for (i=0;i<4;i++){
    for (j=0;j<4;j++){
        printf("Valor para a pos[%d][%d]: ",i,j);
        scanf("%d",&mat[i][j]);
    }
}

int maior=0;
for (i=0;i<4;i++){
    for (j=0;j<4;j++){
        if (mat[i][j]>maior){
            maior = mat [i][j];
            l = i;
            c = j;
        }
    }
}

for (i=0;i<4;i++){
    for (j=0;j<4;j++){
        printf("%d\n", mat[i][j]);
    }
}

printf("O maior e: %d\n Na posicao [%d][%d]",maior,l,c);

}