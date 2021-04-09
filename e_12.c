#include<stdio.h>
#include<stdlib.h>

char conceito(char m);
int main(){
    float media;
    printf("Informa a media final: ");
    scanf("%f", &media);
    printf("Conceito: %c", conceito(media));

}
char conceito(char m){
    if(m>=0.0 && m<=4.9)
        return 'D';
    else if(m>=5.0 && m<=6.9)
        return 'C';
    else if(m >=7.0 && m<=8.9)
        return 'B';
    else if(m>=9.0 && m<=10.0)
        return 'A';
};
