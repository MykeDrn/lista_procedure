#include<stdio.h>
#include<stdlib.h>

void categoria (int idade){
    if (idade >=5 && idade<= 7){
        printf("Categoria: infantil A");
    }
    else if (idade >=8 && idade<= 10){
        printf("Categoria: infantil B");
    }
    else if (idade >=11 && idade<= 13){
        printf("Categoria: Juvenil A");
    }
    else if (idade >=14 && idade<= 17){
        printf("Categoria: Juvenil B");
    }
    else if (idade >=18){
        printf("Categoria: Adulto");
    }

}

int main(){
    int idade;
    printf("Informe a idade do participante: ");
    scanf("%d", &idade);
    categoria(idade);

}
