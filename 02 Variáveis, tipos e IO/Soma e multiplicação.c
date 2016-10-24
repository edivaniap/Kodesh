#include <stdio.h>

int main(){
    int a, b, c, soma, mult;
    scanf("%d %d %d", &a, &b, &c);
    soma = a + b + c;
    mult = a * b * c;
    printf("%d %d", soma, mult);
    return 0;
}
