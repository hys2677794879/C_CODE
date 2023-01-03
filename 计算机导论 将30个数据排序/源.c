#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 30
void sort(int a[]);
int main()
{
    int a[N], i;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a);
    for (i = 0; i < N; i++)
    {
        printf("%4d", a[i]);
        printf("\n");
    }
    return 0;
}
void sort(int a[])
{
    int i, j, t;
    for (i = 0; i < N - 1; i++)
    {
        for (j = 0; j < N - 1 - i; j++)
            if (a[j] < a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
    }
}
