#include<stdio.h>
#include<stdlib.h>

void bis(int ano){
    if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
        printf("%d e Bissexto", ano);
    }
    else{
        printf("%d nao e bissexto.", ano);
    }
}
int main(){

    int ano,a = 1;

    while(a!=0){
        printf("Ano: ");
        scanf("%d", &ano);
        bis(ano);
        getch();
        system("cls");
        printf("digite 1 para continuar e 0 para sair: ");
        scanf("%d", &a);
        system("cls");
    }
}
