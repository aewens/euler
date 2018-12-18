#include <stdio.h>
#include <math.h>

int get_digit(int number, int index) {
    return (int)floor((number / (int)pow(10, index)) % 10);
}

int digits(int number) {
    return (int)floor(log10(number)) + 1;
}

int main(int argc, char **argv) {
    int start = 100;
    int end = 999;
    int largest_palindrome = -1;
    for (int a = start; a <= end; a++) {
        for (int b = start; b <= end; b++) {
            int i = a * b;
            int d = digits(i);
            int number[d];
            int middle;
            if (d % 2 == 0) {
                middle = d / 2;
            }
            else {
                middle = (d - 1) / 2;
            }
            for (int j = 0; j < d; j++) {
                number[j] = get_digit(i, j);
            }
            int skip = 0;
            for (int k = 0; k < middle; k++) {
                if (number[k] != number[d - k - 1]) {
                    skip = 1;
                    break;
                }
            }
            if (!skip && i > largest_palindrome) {
                largest_palindrome = i;
            }
        }
    }
    printf("%d\n", largest_palindrome);
    return 0;
}