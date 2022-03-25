//
// Created by zhb on 2022/3/25.
//
#include <stdio.h>
int main()
{
    typedef struct{
        int x;
        int y;
    }point;
    point p = {2, 5};
    printf("%d\n", p.x);
    return 0;
}