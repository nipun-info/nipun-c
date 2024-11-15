
/*
Char: Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N
*/
#include <stdio.h>

int main()
{
    char x;

    scanf("%c", &x);

    if (x >= 'a' && x <= 'z')
    {
        x = x - 32;
    }
    else
    {
        x = x + 32;
    }

    printf("%c\n", x);

    return 0;
}

/*
Problem-14: Given a comparison symbol S between two numbers A and B. Determine whether it is Right or Wrong.
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V
*/

#include <stdio.h>

int main()
{
    int a, b;
    char s;

    scanf("%d %c %d", &a, &s, &b);

    if (s == '>')
    {
        // greater
        if (a > b)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
    else if (s == '<')
    {
        // lesser
        if (a < b)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
    else
    {
        // equal
        if (a == b)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
}

/*
Codeforces Problem-(Mathematical Expression):
Given a mathematical expression. The expression will be one of the following expressions:
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W

*/
#include <stdio.h>

int main()
{
    int A, B, C;
    char S, Q;

    // Read the input in the format: A S B Q C
    scanf("%d %c %d %c %d", &A, &S, &B, &Q, &C);

    int result;
    // Evaluate the expression based on the operator S
    if (S == '+')
    {
        result = A + B;
    }
    else if (S == '-')
    {
        result = A - B;
    }
    else if (S == '*')
    {
        result = A * B;
    }

    // Check if the result matches C
    if (result == C)
    {
        printf("Yes\n");
    }
    else
    {
        printf("%d\n", result);
    }

    return 0;
}

/*
    Codeforces Problem-(Memo and Momo): https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B
    Memo and Momo are playing a game. Memo will choose a positive number a and Momo will choose a positive number b. Your task is to tell them who will win according to the following rules:
*/
#include <stdio.h>

int main()
{
    int a, b, k;

    scanf("%d %d %d", &a, &b, &k);

    // printf("%d %d %d", a, b, k);

    if (a % k == 0 && b % k == 0)
    {
        printf("Both");
    }
    else if (a % k == 0 && b % k != 0)
    {
        printf("Memo");
    }
    else if (a % k != 0 && b % k == 0)
    {
        printf("Momo");
    }
    else
    {
        printf("No One");
    }

    return 0;
}

/*
    Codeforces Problem-(Sort Numbers): https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T
    Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.
*/
#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && a <= c)
    {
        // a is min
        if (b <= c)
            // c is max
            printf("%d\n%d\n%d\n", a, b, c);
        else
            // b is max
            printf("%d\n%d\n%d\n", a, c, b);
    }
    else if (b <= a && b <= c)
    {
        // b min
        if (a <= c)
            // c max
            printf("%d\n%d\n%d\n", b, a, c);
        else
            // a max
            printf("%d\n%d\n%d\n", b, c, a);
    }
    else
    {
        // c min
        if (a <= b)
            // b max
            printf("%d\n%d\n%d\n", c, a, b);
        else
            // a max
            printf("%d\n%d\n%d\n", c, b, a);
    }

    printf("\n");

    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}

/*
    Codeforces Problem-(Sum of ODD Consecutive Number): https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S
    Given two numbers X and Y. Print the sum of all odd numbers between them, excluding X and Y.
*/

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int cs = 0; cs < t; cs++)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        if (x > y)
        {
            int temp = x;
            x = y;
            y = temp;
        }

        int sum = 0;

        for (int i = x + 1; i < y; i++)
        {
            if (i % 2 != 0)
            {
                // odd
                sum += i;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}
























/*
    Codeforces Problem-(Positions in array): https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D
    Given a number N and an array A of N numbers. Print all array positions that store a number less than or equal to 10 and the number stored in that position.
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n + 5];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= 10)
        {
            printf("A[%d] = %d\n", i, arr[i]);
        }
    }

    return 0;
}



/*
    Codeforces Problem-(Replace MinMax): https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
    Given a number N and an array A of N numbers. Print the array after doing the following operations:
*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n + 5];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = arr[0], max = arr[0];
    int min_pos = 0, max_pos = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            min_pos = i;
        }

        if (arr[i] > max)
        {
            max = arr[i];
            max_pos = i;
        }
    }

    // printf("%d %d\n", min, max);
    // printf("%d %d\n", min_pos, max_pos);

    int temp = arr[min_pos];
    arr[min_pos] = arr[max_pos];
    arr[max_pos] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}


/*
    Codeforces Problem-(Replace MinMax): https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J
    Given a number N and an array A of N numbers. Determine if the array is lucky or not.
*/





