#include<stdio.h>
#include<stdlib.h>

int media();

int main(){
	int n1, n2, n3;
	scanf("%d%d%d", &n1, &n2, &n3);
	system("cls");
	printf("media: %d", media(n1, n2, n3));
}
int media(int a, int b, int c){
    int maior, menor, meio, media = 0;
    //maior
    if(a > b)
    	maior = a;
    else
        maior = b;
    if(c > maior)
        maior = c;
    //menor
    if(a < b)
    	menor = a;
    else
        menor = b;
    if(c < menor)
        menor = c;
    //meio
    if(a<=maior && a>=menor)
        meio = a;
    else if(b<=maior && b>=menor)
        meio = b;
    else if(c<=maior && c>=menor)
        meio = c;

    media = (maior+meio)/2;

    return (media);

};
