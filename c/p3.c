#include <stdio.h>
#include <math.h>

int lsqrt(long n) {
    return (int)ceil(sqrt((double)n));
}

int isqrt(int n){
    return (int)ceil(sqrt((double)n));
}

int is_prime(int n) {
    int s = 2;
    int m = isqrt(n);
    for (int j = s; j < m; j++) {
        if (n % j == 0) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char **argv) {
    long prime = 600851475143;
    int largest_factor = -1;
    int i = 2;
    while (i < lsqrt(prime)) {
        if (!is_prime(i)) {
            i = i + 1;
            continue;
        }
        if (prime % i == 0) {
            largest_factor = i;
        }
        i = i + 1;
    }
    printf("%d\n", largest_factor);
    return 0;
}