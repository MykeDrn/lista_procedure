#include<stdio.h>
#include<stdlib.h>


int maior();

int main(){
	int n1, n2, n3;
	scanf("%d%d%d", &n1, &n2, &n3);
	system("cls");
	printf("Maior numero: %d", maior(n1, n2, n3));
}
int maior(int a, int b, int c){
    int maior;
    if(a > b)
    	maior = a;
    else
        maior = b;

    if(c > maior)
        maior = c;

    return(maior);
};
