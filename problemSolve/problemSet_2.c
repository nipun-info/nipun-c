
/*
Problem-13: Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter
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