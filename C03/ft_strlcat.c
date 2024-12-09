#include<unistd.h>
#include<stdio.h>

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

unsigned int ft_strlcat(char *dest, char *src, unsigned int size){
    unsigned int i = 0;
    while(dest[i]!='\0'){
        i++;
    }
    unsigned int j = 0;
    while(src[j]!='\0' && j<=size-i-1){
        dest[i+j]=src[j];
        j++;
    }
    if (i + j < size) {
        dest[i + j] = '\0';
    }
    return i+j;
}

int main(){
    char dest[20]="Code";
    char src[]=" Review";
    int res=ft_strlcat(dest,src,sizeof(dest));
    printf("Buffer: '%s', Result: %zu\n", dest, res);
    return 0;
}
