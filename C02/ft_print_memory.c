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

int ft_str_is_printable(char *str){
    int i =0;
    int r = 1;
    while(str[i]!='\0'){
        if(((str[i]>'z' || str[i]<'a') && (str[i]>'Z' || str[i]<'A') && (str[i]>'9' || str[i]<'0')) || ft_strlen(str)<0){
            r=0;
            break;
        }
        i++;
    }  
    return r;
}

void ft_putstr(char *str){
    int i =0;
    while(str[i]!='\0'){
        write(1,&str[i],1);
        i++;
    }   
}

void ft_print_hex(unsigned char c)
{
	char	*hex;
	hex = "0123456789abcdef";
	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}

void *ft_print_memory(void *addr, unsigned int size){
    ft_putstr();
}

int main(){
    return 0;
}