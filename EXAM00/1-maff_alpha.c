#include<unistd.h>

int main(){
    char i = 'a';
    char j = 'B';
    while(j<='Z'){
        write(1, &i, 1);
        write(1, &j, 1);
        i=i+2;
        j=j+2;
    }
    write(1, "\n", 1);
    return 0;
}