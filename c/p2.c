#include <stdio.h>

int main(int argc, char **argv) {
    int sum = 2;
    int last1 = 1;
    int last2 = 2;

    while (last2 < 4000000) {
        int last = last1 + last2;
        last1 = last2;
        last2 = last;
        if (last % 2 == 0) {
            sum = sum + last;
        }
    }
    printf("%d\n", sum);
    return 0;
}