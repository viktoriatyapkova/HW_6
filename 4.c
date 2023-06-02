#include <stdio.h>

int sumDigits(int *num) {
    int sum = 0;
    int n = *num; 
    while (n != 0) {
        sum += n % 10; 
        n /= 10; 
    }
    return sum;
}

int main() {
int num = 8862;
printf("%d", sumDigits(&num));
return 0;
}