#include <stdio.h>

int main(){
    int a, p;
    scanf("%d", &a);
    p = a * a;
    printf("%d ", p);

    p = p * a;
    printf("%d", p);
    return 0;
}
