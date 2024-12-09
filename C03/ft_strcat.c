#include<unistd.h>

void ft_putstr(char *str){
    int i =0;
    while(str[i]!='\0'){
        write(1,&str[i],1);
        i++;
    }   
}

char *ft_strcat(char *dest, char *src){
    int i = 0;
    while(dest[i]!='\0'){
        i++;
    }
    int j = 0;
    while(src[j]!='\0'){
        dest[i+j]=src[j];
        j++;
    }
    return dest;
}

int main(){
    char dest[10]="ali";
    char src[10]="test";
    char *res=ft_strcat(dest,src);
    ft_putstr(res);
    return 0;
}