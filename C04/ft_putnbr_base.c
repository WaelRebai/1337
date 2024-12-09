void ft_putnbr_base(int nbr, char *base){
    int i = 0;
    while(base[i]!='\0'){
        int j = i+1;
        while(base[i]!=base[j]){
            j++;
        }
        i++;
    }
}
