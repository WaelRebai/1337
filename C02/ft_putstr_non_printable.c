#include<unistd.h>

void ft_print_hex(unsigned char c)
{
	char	*hex;
	hex = "0123456789abcdef";
	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}

void ft_putstr_non_printable(char *str){
    int i = 0;
    while(str[i]!='\0'){
        if(str[i]>=0 && str[i]<=31){
            write(1,"\\",1);
            ft_print_hex(str[i]);
        }else{
            write(1,&str[i],1);
        }
       
        i++;
    }
}

int main(){
    ft_putstr_non_printable("Coucou\ntu vas bien ?");
    return 0;
}