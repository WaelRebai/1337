#include<stdio.h>
int ft_sqrt(int nb){
    int i=1;
    int res = 0;
    while(nb>0){
        nb=nb-i;
        i=i+2;
        res++;
    }
    return res;
}

int main(){
    int r=ft_sqrt(16);
    printf("%d",r);
    return 0;
}