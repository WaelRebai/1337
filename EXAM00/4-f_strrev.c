#include<stdio.h>

char *ft_strrev(char *str){
    char res[100];
    int i=0;
    int j=0;
    while(str[i]!='\0'){
        res[i]=str[i];
        i++;
    }
    i--;
    while(i>=0){
        str[j]=res[i];
        j++;
        i--;
    }
    return str;
}

int main(){
    char *r;
    char x[10] = "salla";
    r=ft_strrev(x);
    printf("%s", r);
    return 0;
}