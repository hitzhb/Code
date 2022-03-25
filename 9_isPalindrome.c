#include <stdio.h>
#include <stdbool.h>
int arrlen(int x)
{
    int len = 0;
    while (x != 0)
    {
        x = (x - x % 10) / 10;
        len++;
    }
    // printf("%d\n", len);
    return len;
}

bool isPalindrome(int x)
{
    int mybool = 1;
    if (x < 0)
        mybool = 0;
    else
    {
        int len = arrlen(x);
        int arr[len];
        for (int i = 0; i < len; i++)
        {
            arr[i] = x % 10;
            x = (x - x % 10) / 10;
        }

        for (int j = 0; j < (len / 2); j++)
        {
            if (arr[j] != arr[len - j - 1])
            {
                mybool = 0;
                break;
            }
            else
                mybool = 1;
        }
    }
    if (mybool)
        return true;
    else
        return false;
}
int main()
{
    int x = 100000000;
    if (isPalindrome(x))
        printf("true");
    else
        printf("false");
}