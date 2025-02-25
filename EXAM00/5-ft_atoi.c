#include<stdio.h>
int	ft_atoi(const char *str){
    int sign=1;
    int i=0;
    int res=0;
    while(str[i]=='\t' || str[i]=='\n' || str[i]==' '){
        i++;
    }
    while(str[i]!='\0'){
        if(str[i]=='-'){
            sign=-sign;           
        }else if(str[i]>57 || str[i]<48){
            return 0;
        }else{
            int x=str[i]-'0';
            res=(res*10)+x;
        }
        i++;
    }
    return res*sign;
}

int main(){
    char x[10] = "+-+123";
    int r=ft_atoi(x);
    printf("%d",r);
    return 0;
}