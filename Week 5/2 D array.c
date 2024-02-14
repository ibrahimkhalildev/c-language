#include <stdio.h>

int main()
{
    int i, j;
    int marks[3][7];

    marks[0][4] = 12;

    for(j = 0; j<7; j++)
    {
        printf("%d ", marks[0][j]);
    }

    return 0;
}
