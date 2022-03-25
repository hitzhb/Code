//判断奇偶个数，cost = min{奇个数，偶个数}
#include <stdio.h>

int min(int x, int y)
{
    if (x <= y)
        return x;
    else
        return y;
}

int minCostToMoveChips(int *position, int positionSize)
{
    int odd = 0, even = 0;
    for (int i = 0; i < positionSize; i++)
    {
        if (position[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    return min(even, odd);
}

int main()
{
    int a[] = {2, 2, 2, 3, 3, 3};
    printf("%d\n", minCostToMoveChips(&a[0], (sizeof(a) / sizeof(int))));
    return 0;
}