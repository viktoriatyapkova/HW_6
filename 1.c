#include <stdio.h>

int main() {
int a, b, c, d;
scanf("%d %d %d %d", &a, &b, &c, &d);
for (int i = a; i <= b; i++) {
i % d == c;
printf("%d", i);
i += (d - 1);
}
return 0;
}
