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

int ft_strlen(char *str){
    int i =0;
    while(str[i]!='\0'){
        i++;
    }   
    return i;
}

int main(){
    int i = ft_strlen("asdqz");
    ft_putnbr(i);
    return 0;
}