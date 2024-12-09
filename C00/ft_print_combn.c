#include <unistd.h>

void ft_print_combn(int n) {
    int t[n];
    int i = 0;

    // Initialize the array with the smallest n-digit combination
    while (i < n) {
        t[i] = i;
        i++;
    }

    while (t[0] <= 10 - n) {
        // Print the current combination
        i = 0;
        while (i < n) {
            char x = t[i] + '0';
            write(1, &x, 1);
            i++;
        }

        // Print ", " unless it's the last combination
        if (t[0] != 10 - n) {
            write(1, ", ", 2);
        }

        // Increment the combination
        i = n - 1;
        while (i >= 0) {
            if (t[i] < 9 - (n - 1 - i)) {
                t[i]++;
                int j = i + 1;
                while (j < n) {
                    t[j] = t[j - 1] + 1;
                    j++;
                }
                break;
            }
            i--;
        }

        // If i < 0, it means we have finished all combinations
        if (i < 0) {
            break;
        }
    }
}

int main() {
    ft_print_combn(2);
    return 0;
}
