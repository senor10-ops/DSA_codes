#include <stdio.h>

int factors(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factors(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    
    int ans = factors(n);
    printf("%d\n", ans);
    
    return 0;
}
