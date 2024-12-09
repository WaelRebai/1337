#include<unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_decomp(int n)
{
	int		i;
	int		sign;
	char	num[15];

	i = 0;
	sign = n;
	if (sign < 0)
		n = -n;
	while (n > 0)
	{
		num[i++] = (n % 10) + '0';
		n = n / 10;
	}
	if (sign < 0)
		num[i++] = '-';
	while (i-- != 0)
		ft_putchar(num[i]);
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else
		ft_decomp(nb);
}
int ft_strcmp(char *s1, char *s2){
    int i=0;
    int r=0;
    while(s1[i]!='\0' ||  s2[i]!='\0'){
        if (s1[i]!=s2[i]){
            r= s1[i]-s2[i];
            break;
        }
        i++;
    }
    return r;
}


int main(){
    char s1[5]="alibd                   ";
    char s2[5]="ali";
    int t=ft_strcmp(s1,s2);
    ft_putnbr(t);
    return 0;
}