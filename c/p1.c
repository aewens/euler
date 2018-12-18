#include <stdio.h>

int main(int argc, char **argv) {
    int sum = 0;
    for (int i = 0; i < 1000; i++) {
        if (i % 3 != 0 && i % 5 != 0) continue;
        sum = sum + i;
    }
    printf("%d\n", sum);
    return 0;
}