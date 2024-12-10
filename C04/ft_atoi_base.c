#include <stdio.h>

int ft_strlen(char *str){
    int i = 0 ;
    while (str[i] != '\0')
    {
        i++;
    }
    return i ;
}

int ft_atoi(char *str) {
    int i = 0;
    int j = 0;
    int nbm = 0;
    char res[11] = {0};
    int t = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '+') {
            i++;
        } else if (str[i] == '-') {
            nbm++;
            i++;
        } else if ('0' <= str[i] && str[i] <= '9') {
            res[j] = str[i];
            j++;
            if (j >= 10) break;
            i++;
        } else {
            break;
        }
    }
    i = 0;
    while (res[i] != '\0') {
        t = t * 10 + (res[i] - '0');
        i++;
    }
    if (nbm % 2 != 0) {
        t = -t;
    } else {
        t = t;
    }
}


int ft_atoi_base(char *str, char *base) {
    int i =0 ;
    int base_len = ft_strlen(base);
    while (base[i] != '\0')
    {
        int j = i + 1 ;
        while (base[j] != '\0')
        {
            if (base[j] == base[i])
            {
                return 0; 
            }
            else
            {
                j++;
            }
        }
        if (base[i] == '-' || base[i] == '+' || ft_strlen(base) == 1 )
        {
            return 0;
        }
        i++;
    }

    int resAtoi=fr_atoi(str);

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
        re[ft_strlen(reste)-res]=reste[res]
        res--;
    }

    
}

int main() {
    char str[15] = "  --+-578sd";
    char str[20] = "0123456789";
    int res = ft_atoi_base(str, base);
    printf("Result: %d\n", res);
    return 0;
}