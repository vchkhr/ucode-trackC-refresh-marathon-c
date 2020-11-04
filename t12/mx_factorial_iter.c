#include <limits.h>
int mx_factorial_iter(int n);

int mx_factorial_iter(int n) {
    if (n < 0) return 0;
    if (n == 0 || n == 1) return 1;
    unsigned long int result = 1;
    for (int i = 1; i <=n; i++) {
        result = result * i;
        if (result > INT_MAX) return 0;
    }
    return result;
}
