#include <stdio.h>
int main()
{
    int S;
    int a[1002];
    for (int i = 1; i <= 1000; i++)
    {
        int p = 100 * i;
        int s = p - 3500;
        if (s <= 0)
        {
            ;
        }
        else if (s <= 1500)
        {
            s -= s * 3 / 100;
        }
        else if (s <= 4500)
        {
            s -= (s - 1500) / 10 + 45;
        }
        else if (s <= 9000)
        {
            s -= (s - 4500) / 5 + 45 + 300;
        }
        else if (s <= 35000)
        {
            s -= (s - 9000) / 4 + 45 + 300 + 900;
        }
        else if (s <= 55000)
        {
            s -= (s - 35000) * 3 / 10 + 45 + 300 + 900 + 6500;
        }
        else if (s <= 80000)
        {
            s -= (s - 55000) * 35 / 100 + 45 + 300 + 900 + 6500 + 6000;
        }
        else {
            s -= (s - 80000) * 45 / 100 + 45 + 300 + 900 + 6500 + 6000 + 8750;
        }
        a[i] = s + 3500;
    }
    scanf("%d", &S);
    for (int i = 1; i <= 1000; i++)
    {
        if (S == a[i])
        {
            printf("%d", 100 * i);
            break;
        }
    }
    return 0;
}
