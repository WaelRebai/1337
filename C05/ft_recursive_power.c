#include<stdio.h>
int ft_recursive_power(int nb, int power){
    if(power<0 || (nb==0 && power>0)){
        return 0;
    }else if(nb==0 || power==0){
        return 1;
    }else if(power==1){
        return nb;
    }else{
        return nb*ft_recursive_power(nb,power-1);
    }
}

int main(){
    int r=ft_recursive_power(1,2);
    printf("%d",r);
    return 0;
}