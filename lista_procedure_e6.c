#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void preencher();
void exibir();

int num[100],i;

int main(){

     int choice, trig = 1;

    do{
        printf("1-preencer vetor\n2-exibir valores maiores que 80\n0-sair\n");
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
    for(i = 0; i<100; i++){
        num[i] = rand() % 99;
    }
}
void exibir(){
    for(i = 0; i<100; i++){
        if(num[i] > 80){
            printf("num[%d]: %d\n", i, num[i]);
        }
    }
    getch();
    system("cls");
}

