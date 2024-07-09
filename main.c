#include <stdio.h>

int countNumbers(int n) {
    if (n == 1) return 0;
    
    int dp[n + 1];
    dp[1] = 0;
    
    for (int i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1];
        for (int m = 1; m < i; ++m) {
            if (i % m == 0 && (i / m) % m == 0) {
                dp[i]++;
            }
        }
    }
    
    return dp[n];
}

int main() {
    int n;
    printf("Введіть натуральне число n: ");
    scanf("%d", &n);
    
    int result = countNumbers(n);
    
    printf("Кількість рівних дільників числа %d: %d\n", n, result);
    
    return 0;
}
