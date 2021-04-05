#include<stdio.h>
#include<stdlib.h>

void sub(float a, float b){

    float res;
    res = a - b;
    printf("\n%.f", res);

};

int main(){

	float n1, n2;
	printf("Insira os numeros: ");
	scanf("%f %f", &n1, &n2);
	sub(n1,n2);

}
