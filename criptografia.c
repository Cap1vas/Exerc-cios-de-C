#include <stdio.h>

void criptografia(char a[100],int valor){
    int i;
    for (int i=0; a[i]!='\0';i++){
        if(a[i]>='a' &&a[i]<='z'){
            a[i] = a[i] + valor;
        if(a[i]>='A' && a[i]<='Z'){
            a[i] = a[i] + valor;
        }
        }
    }
}
int main(){
    char str[100];
    int valor;
    printf("Insira um valor:");
    scanf("%d", &valor);
    printf("Digite uma frase para ser criptografada: ");
    fflush(stdin);
    scanf("%[^\n]", str);
    criptografia(str,valor);
    fputs(str,stdout);






}