#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        printf("1/%d ", 2 * i);
    }
    printf("\n");
    return 0;
}
