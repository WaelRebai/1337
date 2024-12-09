#include<unistd.h>

void ft_putstr(char *str){
    int i =0;
    while(str[i]!='\0'){
        write(1,&str[i],1);
        i++;
    }   
}

char *ft_strlowcase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
        i++;
    }
    return str;
}


char *ft_strcapitalize(char *str){
    int i = 0;
    str=ft_strlowcase(str);
    str[0]-=32;
    while (str[i] != '\0') {
        if(!(((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')) || (str[i]>=0 && str[i]<=9))){
            if (str[i+1] >= 'a' && str[i+1] <= 'z') {
                str[i+1] -= 32;
            }
        }
        i++;
    }
    return str;
}

int main() {
    char str[] = "salut, comMEnt tu vas ? 42mots quarante-deux; cinquante+et+un"; 
    ft_strcapitalize(str);
    ft_putstr(str);
    return 0;
}
