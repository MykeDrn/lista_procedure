#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct cliente{
    int codigo, rg;
    char nome [15];
};
struct cliente cl;

void preencher();
void exibir();

int main(){

    int choice, trig = 1;

    do{
        printf("1-preencer cadastro\n2-exibir cadastro\n0-sair\n");
        printf("\nDigite a opcao desejada: ");
        scanf("%d", &choice);
        switch(choice){
        case 1:
            system("cls");
            preencher();
            break;
        case 2:
            system("cls");
            exibir();
            break;
        case 0:
            trig = choice;
            break;
        default:
            printf("Opcao invalida");
            break;
        }

    }while(trig == 1);
}
void preencher(){
    printf("Codigo: ");
    scanf("%d", &cl.codigo);
    printf("Nome: ");
    fflush(stdin);
    gets(cl.nome);
    printf("Rg: ");
    scanf("%d", &cl.rg);
    system("cls");
}
void exibir(){
    printf("Codigo: %d", cl.codigo);
    printf("\nNome: %s", cl.nome);
    printf("\nRg: %d", cl.rg);
    getch();
    system("cls");
}
