void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_print_alphabet(void){
    int i = 'a';
    while (i<='z'){
        ft_putchar(i);
        i++;
    }
}