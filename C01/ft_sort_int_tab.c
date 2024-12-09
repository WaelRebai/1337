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

void ft_sort_int_tab(int *tab, int size){
    int i = 0;
    int temp;
    while(i<=size){
        int j = i+1;
        while(j<=size){
            if(tab[i]>tab[j]){
                temp=tab[i];
                tab[i]=tab[j];
                tab[j]=temp;
            }
        j++;
        }
    i++;
    }
}

int main(){
    int tab[8]={4,3,0,1,2,8,7,9};
    int size = 8;
    ft_sort_int_tab(tab,size);
    int j=0;
    while(j!=size){
        ft_putnbr(tab[j]);
        j++;
    }
}