#include<unistd.h>
#include<stdio.h>

void ft_putnbr(int c) {
    if (c < 0) {  // Handle negative numbers
        write(1, "-", 1);
        c = -c;
    }
    if (c >= 10)  // Recursively print digits
        ft_putnbr(c / 10);
    char t = (c % 10) + '0';
    write(1, &t, 1);
}


void ft_swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    ft_putnbr(*a);
    ft_putnbr(*b);
}




int main(){
    int a=3;
    int b=4;
    ft_swap(&a,&b);
    return 0;
    
}