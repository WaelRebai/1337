#include<stdio.h>
int ft_fibonacci(int index){
    if(index<0){
        return -1;
    }
    int U0 = 0;
    int U1 = 1;
    int Un=U0+U1;
    int i=2;
    while(i<index){
        U0=U1;
        U1=Un;
        Un=U0+U1;
        i++;
    }
    return Un;
}

int main(){
    int res=ft_fibonacci(6);
    printf("%d",res);
    return 0;
}