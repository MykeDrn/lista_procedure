#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define num 8
struct produto{
    char nome[20];
    float preco;
    float peso;
}prod[num];

void preencher();
float media(struct produto a[num]);
float leve(struct produto a[num]);

int main(){
        int choice, trig = 1;

    do{
        printf("1-preencer vetor\n2-exibir menor peso\n3-exibir media de preco\n0-sair\n");
        printf("\nDigite a opcao desejada: ");
        scanf("%d", &choice);
        switch(choice){
        case 1:
            system("cls");
            preencher();
            break;
        case 2:
             printf("menor peso: %.2f", leve(prod));
            getch();
            break;
        case 3:
            printf("media de preço: %.2f", media(prod));
            getch();
            break;
        case 0:
            trig = choice;
            break;
        default:
            printf("Opcao invalida");
            break;
        }
        system("cls");
    }while(trig == 1);

}
void preencher(){
    int i=0;

    for(i; i<num; i++){
        printf("Nome: ");
        fflush(stdin);
        gets(prod[i].nome);
        printf("\nPreco: ");
        scanf("%f", &prod[i].preco);
        printf("\npeso: ");
        scanf("%f", &prod[i].peso);
        system("cls");
    }

};
float media(struct produto a[num]){
    int i = 0;
    float media = 0;
    for(i; i<num; i++){
        media += a[i].preco;
    }
    return media/num;
};
float leve(struct produto a[num]){
    int i = 0;
    float peso = 100000000.000000000000;
    for(i; i<num; i++){
        if(a[i].peso<pesoref)
            pesoref = a[i].peso
        else
            break;
        }
        return pesoref;
};
