//program in c to compare three numbers using nesting
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) 
    {
        if (a>c)
        {
            printf("%d is the greatest", a);
        }
    }
    else 
    {
        printf("%d is the greatest", c);
    }
    if (b>c)
    {
        if (b>a)
        {
            printf("%d is the greatest", b);
        }
    }

    return 0;
}
