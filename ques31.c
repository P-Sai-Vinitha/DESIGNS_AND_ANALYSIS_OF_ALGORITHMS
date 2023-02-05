#include <stdio.h>
#include <string.h>

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permute(char *num, int l, int r)
{
    int i;
    if (l == r)
    {
        for (i = 0; i <= r; i++)
        {
            printf("%c", num[i]);
        }
        printf("\n");
    }
    else
    {
        for (i = l; i <= r; i++)
        {
            swap((num + l), (num + i));
            permute(num, l + 1, r);
            swap((num + l), (num + i));
        }
    }
}

int main()
{
    char num[10];
    int n, i;
    printf("Enter the number of digits: ");
    scanf("%d", &n);
    printf("Enter the digits: ");
    for (i = 0; i < n; i++)
    {
        scanf(" %c", &num[i]);
    }
    permute(num, 0, n - 1);
    return 0;
}
