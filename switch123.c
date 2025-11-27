#include <stdio.h>

int main() {
    int choice;
    printf("choose 1, 2 or 3):\n");
    scanf ("%d", &choice);
    switch (choice)
    {
    case 1:
    printf("salaam");
    break;
    case 2:
    printf("aadab");
    break;
    case 3:
    printf("hello");
    break;
    default:
    printf("incorect option");
}
    return 0;
}
