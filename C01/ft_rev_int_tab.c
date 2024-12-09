#include<unistd.h>

void ft_putnbr(int c){
    while(c>9){
        int y = c%10;
        c = c/10;
        char t = y+'0';
        write(1, &t, 1);
    }
    char t=c+'0';
    write(1, &t, 1);

}


void ft_rev_int_tab(int *tab, int size){
    int i=0;
    int j=size-1;
    int temp;
    while(i<j){
        temp=tab[i];
        tab[i]=tab[j];
        tab[j]=temp;
        i++;
        j--;
    }
}

int main(){
    int tab[5]={0,1,2,3,4};
    int size=5;
    ft_rev_int_tab(tab,size);
    int j=0;
    while(j!=size){
        ft_putnbr(tab[j]);
        j++;
    }
    return 0;
}