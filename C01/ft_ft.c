#include<unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_putnbr(int nbr){
    int temp = nbr / 10;
    if (temp != 0)
        ft_putnbr(temp);
    ft_putchar((nbr % 10) + '0');
}

void ft_ft(int *nbr){
    *nbr=42;
    int x = *nbr;
    ft_putnbr(x);
    ft_putchar('\n');
}

void main(){
    int nbr;
    ft_ft(&nbr);
}