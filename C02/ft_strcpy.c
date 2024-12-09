#include<unistd.h>

void ft_putstr(char *str){
    int i =0;
    while(str[i]!='\0'){
        write(1,&str[i],1);
        i++;
    }   
}

char *ft_strcpy(char *dest, char *src){
    int i=0;
    while(src[i]!='\0'){
        dest[i]=src[i];
        i++;
    }
    dest[i]=src[i];
    return dest;
}

int main(){
    char x[10]="test";
    char y[10];
    char *res = ft_strcpy(y,x);
    ft_putstr(res);
    return 0;
}