void print_numbers(char i, char j, char k){
    write(1,&i,1);
    write(1,&j,1);
    write(1,&k,1);
}
void ft_print_comb(void){
    char i = '0';
    char j = i++;
    char k = j++;
    while(i<='7'){
        while(j<='8'){
            while(k=='9'){
            i++;
            j=i++;
            print_numbers(i,j,k);
            }
            k++;
        }
        
    }
}

void main(){
    ft_print_comb();
}