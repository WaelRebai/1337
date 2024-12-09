#include<unistd.h>

void ft_putstr(char *str){
    int i =0;
    while(str[i]!='\0'){
        write(1,&str[i],1);
        i++;
    }   
}

char *ft_strncpy(char *dest, char *src, unsigned int n){
    unsigned int i=0;
    while(i<n){
        dest[i]=src[i];
        i++;
    }
    return dest;
}

int main(){
    char x[10]="test";
    char y[10];
    int n = 2;
    char *res = ft_strncpy(y,x,n);
    ft_putstr(res);
    return 0;
}