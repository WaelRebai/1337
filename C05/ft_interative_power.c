#include<stdio.h>
int ft_iterative_power(int nb, int power){
    if(power<0 || (nb==0 && power>0)){
        return 0;
    }else if(power==0 || nb==0){
        return 1;
    }
    while(power>1){
        nb*=nb;
        power-=1;
    }
    return nb;
}

int main(){
    int r=ft_iterative_power(5,2);
    printf("%d",r);
    return 0;
}