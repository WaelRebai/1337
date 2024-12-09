#include<unistd.h>

void ft_putstr(char *str){
    int i =0;
    while(str[i]!='\0'){
        write(1,&str[i],1);
        i++;
    }   
}

int ft_strlen(char *str){
    int i =0;
    while(str[i]!='\0'){
        i++;
    }   
    return i;
}

char *ft_strstr(char *str, char *to_find) {
    if (to_find[0] == '\0') {
        return str;
    }
    int i=0, j=0;
    while (str[j]!='\0') {
        if (str[j]==to_find[0]) {
            int k=j;
            i=0;
            while (str[k]!='\0' && to_find[i]!='\0' && str[k]==to_find[i]) {
                k++;
                i++;
            }
            if (to_find[i] == '\0') {
                return &str[j];
            }
        }
        j++;
    }
    return NULL;
}


int main(){
    char *res=ft_strstr("abalxab", "alx");
    ft_putstr(res);
    return 0;
}