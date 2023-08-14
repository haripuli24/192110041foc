#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;
    int count = 0;
    
    for (int i = 0; count < n; i += 2) {
        if (i % 3 == 0) {
            sum += i;
        }
        count++;
    }

    printf("Sum of even numbers divisible by 3: %d\n", sum);

    return 0;
}

