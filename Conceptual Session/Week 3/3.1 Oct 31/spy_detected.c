#include <stdio.h>
int main()
{
    int t, ii;
    scanf("%d", &t);
    for (ii = 1; ii <= t; ii += 1)
    {
        int n, i, maxN = 101;
        scanf("%d", &n);

        int input[n + 1];
        for (i = 1; i <= n; i += 1)
        {
            scanf("%d", &input[i]);
        }

        int arr[maxN];
        for (i = 0; i <= maxN; i += 1)
        {
            arr[i] = 0;
        }
        for (i = 1; i <= n; i += 1)
        {
            arr[input[i]] += 1;
        }

        int index;
        for (i = 1; i <= n; i += 1)
        {
            if (arr[input[i]] == 1)
            {
                index = i;
                break;
            }
        }

        printf("%d\n", index);
        
    }

    return 0;
}
