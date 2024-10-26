/******************************** 
 * Module2.5: Practice Day -1:
 * https://www.hackerrank.com/contests/week-1-introduction-to-c-programming-practice-contest-1/challenges
 * *****************************/ 

// Problem-2: In this problem you will be given an integer number N. Print "Zero" if the number is equals to 0 and "Non Zero" Otherwise.
// ---------Code Here........
#include <stdio.h>

int main()
{
    // ---------Code Here........
    int N;

    scanf("%d", &N);

    if (N == '0')
    {
        printf("Zero\n");
    }
    else
    {
        printf("Non Zero\n");
    }

    return 0;
}

// Problem-3: In this problem you will be given an integer number N. You will have to add 5 with N and print it.
#include <stdio.h>

int main()
{
    // ---------Code Here........
    int N;

    scanf("%d", &N);

    printf("%d", N + 5);

    return 0;
}

// Problem-4: In this problem you will be given two integers a and b, you have to tell if one is the multiple of other. (a is the multiple of b or b is the multiple of a).
#include <stdio.h>

int main()
{
    // ---------Code Here........
    int a, b;

    scanf("%d %d", &a, &b);

    if(a % b == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}

// Problem-5: In this problem you will be given a floating point number x. You have to print x upto 3 decimal points.
#include <stdio.h>

int main()
{
    // ---------Code Here........
    double x;
    scanf("%lf", &x);

    printf("%0.3lf", x);

    return 0;
}


/******************************** 
 * Module-3.5: Practice Day -2:
 * https://www.hackerrank.com/contests/week-1-introduction-to-c-programming-practice-contest-2/challenges
 * *****************************/ 

// Problem-2: Take two integers A and B as input and output their summation.
#include <stdio.h>

int main()
{
    // ---------Code Here........
    int A, B;
    scanf("%d %d", &A, &B);

    int sum = A + B;

    printf("%d", sum);

    return 0;
}

// Problem-3: You've learned about variables, right? Now its time to practice them. You need to take an integer A, a very big integer B, a floating value C and a character D as input and output them serially.


// Problem-4: I know and you also know that you love practice day so much. So this task is for you. You will be given a positive integer N, you need to print "I Love Practice" N times.
#include <stdio.h>

int main()
{
    // ---------Code Here........
    int N;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++)
    {
        printf("I Love Practice\n");
    }

    return 0;
}


// Problem-5: You will be given a positive integer N, you need to print from 1 to N and besides the value, print Yes or No. Print Yes if the value is divisible by 5 and print No otherwise.
#include <stdio.h>

int main()
{
    // ---------Code Here........
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d Yes\n", i);
        }
        else
        {
            printf("%d No\n", i);
        }
    }

    return 0;
}





