#include <stdio.h>

int ispolnitel(int num) {
    int first = num / 100;
    int second = num / 10 % 10;
    int third = num % 10;
    int dig1 = first * second;
    int dig2 = second * third;
    int result;
    if (dig1 >= dig2) {
        result = dig1 * 10 + dig2;
    } else {
        result = dig2 * 10 + dig1;
    }
    return result;
}

int main() {
    int num = 217;
    printf("%d", ispolnitel(num)); 
    return 0;
}
