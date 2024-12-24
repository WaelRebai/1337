#include<stdio.h>

int ft_iterative_factorial(int nb){
    int i = 1;
    while(nb>0){
        i*=nb;
        nb--;
    }
    if (nb < 0)
	{
		return (0);
	}
    return i;
}

int main(){
    int r=ft_iterative_factorial(5);
    printf("%d",r);
    return 0;
}