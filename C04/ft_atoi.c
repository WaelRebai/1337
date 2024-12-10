#include <stdio.h>

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

int main() {
    char str[15] = "  --+-578sd";
    int res = ft_atoi(str);
    printf("Result: %d\n", res);
    return 0;
}
