#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

int dado();

int main(){
    int a;
    char b = 's';

    while(b != 'n'){
        printf("sortear[s/n]: ");
        fflush(stdin);
        scanf("%c", &b);
        switch(b){
        case 's':
            printf("\n\nNumero gerado: %d", dado(a));
            break;

        case 'n':
            b='n';
            break;

        default:
            printf("\n\nopcao invalida.");
            break;
        }
        getch();
        system("cls");
    }
}
int dado(int n){
    srand(time(NULL));
    n = 1+(rand())%6;
    return n;
};
