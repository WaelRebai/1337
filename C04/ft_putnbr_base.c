#include<unistd.h>
 int ft_strlen(char *str){
    int i = 0 ;
    while (str[i] != '\0')
    {
        i++;
    }
    return i ;
 }
  void ft_putnbr_base(int nbr, char *base){
    int i =0 ;
    int base_len = ft_strlen(base);
    while (base[i] != '\0')
    {
        int j = i + 1 ;
        while (base[j] != '\0')
        {
            if (base[j] == base[i])
            {
                return ; 
            }
            else
            {
                j++;
            }
        }
        if (base[i] == '-' || base[i] == '+' || ft_strlen(base) == 1 )
        {
            return;
        }
        i++;
    }
    if (nbr < 0 )
    {
        nbr = -nbr;
        write(1,"-",1);
    }
     if (nbr == 0) {
        write(1, &base[0], 1);
        return;
    }
    int res = 0 ; 
    char reste[100] ;
    while (nbr >0)
    {
        reste[res] = base[nbr % base_len];
        nbr = nbr / ft_strlen(base);
        res++;
    }
    
    while (res > 0 )
    {
        write(1,&reste[res-1],1);
        res--;
    }
 }
 int main(){
    int nbr = -42;
    char base[100] = "0123456789ABCDEF";
    ft_putnbr_base(nbr,base);
    return 0;
 }