#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int pn();

int main(){
    int num;
    printf("Numero: ");
    scanf("%d", &num);
    printf("\n%d", pn(num));
}
int pn(int n){
    if(n>=0)
        return 1;
    else if(n<0)
        return 0;
};
