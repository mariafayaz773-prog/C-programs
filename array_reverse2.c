#include<stdio.h>
int main()
{
    int a[100], n,i;
    printf("enter the number of elements\n");
    scanf("%d", &n);
    printf("enter the value of elements\n");
    for (i=0;i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("array in reverse order\n");
    for (i=n-1;i>=0; i--)
    {
        printf("%d ", a[i]);
    }
  return 0;
}
