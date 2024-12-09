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

void ft_div_mod(int a, int b, int *div, int *mod){
    *div=a/b;
    *mod=a%b;
    
    ft_putnbr(*div);
    ft_putnbr(*mod);
}


int main(){
    int a = 8;
    int b = 2;
    int div;
    int mod;
    ft_div_mod(a,b,&div,&mod);
    
}

