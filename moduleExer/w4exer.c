/*************************************
      Week-04: Module 13: Frequency Array
        Array Operation
**************************************/

// ===== 13.2: Frequency Array in C  =======


// ===== 13.3: How To use Frequency Array =======


// ===== 13.4: Implementing Frequency Array  =======
#include <stdio.h>

int main()
{
    // ---------Code Here........
    int n;
    scanf("%d", &n);

    int a[n + 5];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int f[100000] = {0}; // Declare freq array

    for (int i = 0; i < n; i++) // loop freq array
    {
        // printf("%d ", a[i]);
        f[a[i]] = 1;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d %d\n", i, f[i]);
    }

    // cheek exist element found or not found
    printf("Found: %d", f[8]);

    // cheek the value which value ache r nai
    int m;
    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        int x;
        scanf("%d", &x);

        printf("%d ", x);

        if (f[x] == 1)
        {
            printf("ache\n");
        }
        else
        {
            printf("nai\n");
        }
    }

    return 0;
}


// ===== 13.5: Unique Characters in A string  =======
#include <stdio.h>
#include <string.h>

int a[100000];

int main()
{
    // ---------Code Here........
    char str[10] = "apple";

    int f[26] = {0};

    int len = strlen(str);

    // printf("%d", len);

    for (int i = 0; i < len; i++)
    {
        char ch = str[i];
        // printf("%c", ch);

        int index = ch - 'a';
        // printf("%d ", index);

        f[index] = 1;
    }

    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        // printf("%c %d \n", i + 'a', f[i]);
        count += f[i];

        if (f[i] == 1)
        {
            printf("%c %d \n", i + 'a', f[i]);
        }
    }

    printf("%d\n", count);

    return 0;
}


// ===== 13.6: Frequency Array Problem  =======
/*
    https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V
    Given 2 numbers N, M and and array A of N numbers. For every number 1 to M, print how many times this number appears in this array.
*/ 
#include <stdio.h>
#include <string.h>

int f[100000];

int main()
{
    // ---------Code Here........
    int n, m;

    scanf("%d %d", &n, &m);

    int a[n + 5];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        f[a[i]] += 1;
    }

    for(int i = 1; i <=m; i++)
    {
        printf("%d\n", f[i]);
    }

    return 0;
}



/*************************************
      Week-04: Module 14: 2D Array
        Array Operation
**************************************/

// ===== 14.2: Array Dimension  =======


// ===== 14.3: Declaration, Initialization & access  =======
#include <stdio.h>
#include <string.h>

int f[100000];

int main()
{
    // ---------Code Here........
    // int arr[3][5];
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("i = %d, j = %d, address = %d || ", i, j, arr[i][j]);
        }
    }

    return 0;
}

// ===== 14.4: Input Output of 2D Matrix  =======
#include <stdio.h>
#include <string.h>

int f[100000];

int main()
{
    // ---------Code Here........
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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // after change the value
    a[1][2] = 100;
    a[0][2] = 200;
    a[2][2] = 300;

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


// ===== 14.5: Square, Diagonal, Scalar Matrix =======
/*
Square matrix: A square matrix is a matrix that has an equal number of rows and columns.
1 3 4 9 
6 4 2 5 
9 2 5 2
8 5 1 0

Diagonal matrix: https://byjus.com/maths/diagonal-matrix/
5 0 0
0 2 0
0 0 3

(0,0) (0,1) (0,2) (0,3)
(1,0) (1,1) (1,2) (1,3)
(2,0) (2,1) (2,2) (2,3)
(3,0) (3,1) (3,2) (3,3)

Scalar Matrix:
1 0 0
0 1 0
0 0 1


*/ 
#include <stdio.h>
#include <string.h>

int f[100000];

int main()
{
    // ---------Code Here........
    int n;

    scanf("%d", &n);

    int m[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

    int element = m[0][0];

    int flag = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (m[i][j] != element)
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                if (m[i][j] != 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            break;
        }
    }

    if (flag == 1)
    {
        printf("Scalar");
    }
    else
    {
        printf("Not Scalar");
    }

    return 0;
}


// ===== 14.6: Checking a Scalar Matrix  =======



// ===== 14.7: Matrix CF  =======
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T
#include <stdio.h>
#include <string.h>

int main()
{
    // ---------Code Here........
    int n;

    scanf("%d", &n);

    int m[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

    int main_diagonal = 0, sec_diagonal = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                main_diagonal += m[i][j];
            }

            if (i + j == n - 1)
            {
                sec_diagonal += m[i][j];
            }
        }
    }

    int diff = abs(main_diagonal - sec_diagonal);

    printf("%d\n", diff);

    return 0;
}
