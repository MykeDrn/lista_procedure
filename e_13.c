#include<stdio.h>
#include<stdlib.h>
void rec();
float mult(float i);

int main(){
    rec();
}
void rec(){
    float a;
    printf("Informe o numero: ");
    scanf("%f", &a);
    printf("Numero multiplicado: %f", mult(a));
};
float mult(float i){
    return i*10;
};
