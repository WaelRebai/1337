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
    int i=0;
    while(str[i]!='\0'){
        i++;
    }   
    return i;
}

int ft_str_is_numeric(char *str){
    int i =0;
    int r = 1;
    while(str[i]!='\0'){
        if((str[i]>'9' || str[i]<'0') || ft_strlen(str)<0){
            r=0;
            break;
        }
        i++;
    }  
    return r;
}

int main(){
    int r=ft_str_is_numeric("5");
    ft_putnbr(r);
}