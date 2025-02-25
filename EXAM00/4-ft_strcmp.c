#include<stdio.h>

int ft_strcmp(char *s1, char *s2){
    int i=0;
    while(s1[i]!='\0' && s2[i]!='\0'){
        if (s1[i]!=s2[i]){
            return s1[i]-s2[i];
        }
        i++;
    }
    return 0;
}

int main(){
    int r=ft_strcmp("aavv","aavv");
    printf("%d",r);
    return 0;
}