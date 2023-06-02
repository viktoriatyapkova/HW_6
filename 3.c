#include <stdio.h>

int main() {
int n;
scanf("%d", &n);
int prev = 0, fol = 1, curr;
for (int i = 2; i <= n; i++) {
    curr = prev + fol;
    prev = fol;
    fol = curr;
}
printf("%d", curr);
}
