#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void vol(float raio){
    float res;
    res = 1.33333*3.14159*pow(raio,3);
    printf("Volume da esfera = %.2f", res);
}

int main(){

	float calc = 3;
	printf("Informe o raio da esfera: ");
	scanf("%f", &calc);
    vol(calc);
}
