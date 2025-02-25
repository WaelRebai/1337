#include<stdio.h>
void ft_swap(int *a, int *b){
    int aux;
    aux = *a;
    *a=*b;
    *b=aux;
}

int main(){
    int a=12;
    int b=3;
    ft_swap(&a,&b);
    printf("%d\n",a);
    printf("%d",b);
}