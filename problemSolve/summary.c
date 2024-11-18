// Summary of module 13
// implementing Frequency array:
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n + 5];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int f[100000] = {0};
    for (int i = 0; i < n; i++)
    {
        f[a[i]] = 1;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d %d\n", i, f[i]);
    }

    int m;
    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        int x;
        scanf("%d", &x);

        printf("%d ", x);

        if (f[x] == 1)
        {
            printf("✅\n");
        }
        else
        {
            printf("❎\n");
        }
    }

    return 0;
}

//  unique string & count total string
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = "banana";

    int len = strlen(str);

    int f[10000] = {0};

    for (int i = 0; i < len; i++)
    {
        int index = str[i] - 'a';
        f[index] = 1;
    }

    int cnt = 0;

    for (int i = 0; i < 26; i++)
    {
        cnt += f[i];

        if (f[i] == 1)
        {
            printf("%d %c\n", f[i], i + 'a');
        }
    }

    printf("%d", cnt);

    return 0;
}

// Problem: Frequency array: how many times this number appears in array.
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n + 5];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int f[100000] = {0};

    for (int i = 0; i < n; i++)
    {
        f[a[i]] += 1;
    }

    for (int i = 1; i <= m; i++)
    {
        printf("element: %d Times: %d\n", i, f[i]);
    }

    return 0;
}

// Summary of module 14
// Input Output of 2D Matrix
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n + 5][m + 5];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    a[1][3] = 100;
    a[2][3] = 200;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Checking a Scaler Matrix
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int element = matrix[0][0];
    int isScalar = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (matrix[i][j] = !element)
                {
                    isScalar = 0;
                    break;
                }
            }
            else
            {
                if (matrix[i][j] != 0)
                {
                    isScalar = 0;
                    break;
                }
            }
        }
        if (isScalar == 0)
        {
            break;
        }
    }

    if (isScalar == 1)
    {
        printf("Scalar");
    }
    else
    {
        printf("Not Scalar");
    }

    return 0;
}

// Matrix CF : absolute difference between the summation of its two diagonals (primary diagonal and secondary diagonal)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int main_diagonal = 0, sec_diagonal = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                main_diagonal += matrix[i][j];
            }

            if (i + j == n - 1)
            {
                sec_diagonal += matrix[i][j];
            }
        }
    }

    int diff = abs(main_diagonal - sec_diagonal);

    printf("%d\n", diff);

    return 0;
}

// 😕 Conceptual Session: W-4-1 😕
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char str[n + 5];
    scanf("%s", str);

    int freq[26] = {0};
    for (int i = 0; i < n; i++)
    {
        int index = str[i] - 'a';
        freq[index]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
            printf("%c %d\n", i + 'a', freq[i]);
    }

    return 0;
}

/*
Input:
10
abcabbace
*/

#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c], b[r][c], sum[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
