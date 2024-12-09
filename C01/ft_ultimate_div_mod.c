#include<unistd.h>

void ft_putnbr(int c) {
    if (c < 0) { 
        write(1, "-", 1);
        c = -c;
    }
    if (c >= 10) ft_putnbr(c / 10);
    char t = (c % 10) + '0';
    write(1, &t, 1);
}

void ft_ultimate_div_mod(int *a, int *b){
    int x=*a;
    int y=*b;
    *a=x/y;
    *b=x%y;
    ft_putnbr(*a);
    ft_putnbr(*b);
}


int main(){
    int a = 8;
    int b = 2;
    ft_ultimate_div_mod(&a,&b);
    
}

