 #include<unistd.h>
 
 void print_numbers(char a, char b, char c, char d){
    write(1,&a,1);
    write(1,&b,1);
    write(1," ",1);
    write(1,&c,1);
    write(1,&d,1);
    write(1,", ",2);

}
 
 void ft_print_comb2(void){
    char a = '0';
    char b = '0';
    char c = '0';
    char d = '1';
    while(a<='9'){
        while (b<='9'){
            while (c<='9'){
                while (d<='9'){
                    print_numbers(a,b,c,d);
                    d++;
                }
                d='0';
                c++;
            }
            b++;
            c=a;
            d=b+1;
        }
        b='0';
        d=b+1;
        a++;
        c=a;
    }
 }

 void main(){
    ft_print_comb2();
 }
