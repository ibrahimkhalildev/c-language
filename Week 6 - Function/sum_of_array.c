#include <stdio.h>

int sum_machine(int n, int sums[] )
{
    int i, summ=0;
    for ( i = 0; i < n; i++)
    {
        summ+= sums[i];
    }
    return summ;
}

int main()
{
    int arr[] = {12, 45, 487, 58, 989, 4, 1, 125, 85};
    int summ = sum_machine(9,arr);
    printf("The sum is %d", summ);

    return 0;
}
