
/************** Week-02 ***************
       Module 6.5: Practice Day01
**************************************/
/*
    Given a lowercase alphabet character. You have to print the next character in the alphabet.
*/

#include <stdio.h>
#include <limits.h>

int main()
{
    char ch;

    scanf("%c", &ch);

    if (ch == 'z')
    {
        printf("a");
    }
    else
    {
        printf("%c", ch + 1);
    }
    
    return 0;
}

/*
    Ali Baba: One day, Ali Baba had an easy puzzle that he couldn't solve. The puzzle consisted of 4 numbers and his task was to check whether he could get the fourth number using arithmetic operators (+,−,×) between the other three numbers; so that each operator is used only once.
*/ 
#include <stdio.h>

int main()
{
    // ---------Code Here ........

    // not solve this problem
    

    return 0;
}

/*
    Divisor: Given a number N. Print all the divisors of N in ascending order.
*/
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    // printf("%d", N);

    for(int i = 1; i <= N; i++)
    {
        if(N % i == 0){
            printf("%d\n", i);
        }
    }

    return 0;
}

/*
    Even Number: Given a number N. Print all even numbers between 1 and N inclusive in separate lines.
*/ 

#include <stdio.h>

int main()
{
    // ---------Code Here........
    int N;
    scanf("%d", &N);

    int evenNum = 0;

    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            evenNum = 1;
        }
    }

    if (!evenNum)
    {
        printf("-1");
    }

    return 0;
}

/*
    Lucky Numbers: A number of two digits is lucky if one of its digits is divisible by the other. (see concept-1)
*/

#include <stdio.h>

int main()
{
    // ---------Code Here........
    int n;
    scanf("%d", &n);

    int last_digit = n % 10;
    int first_digit = n / 10;

    if (last_digit == 0)
    {
        printf("YES");
    }
    else if (first_digit % last_digit == 0 || last_digit % first_digit == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}


/************** Module 7.5: Practice Day02 ***************/


/*
    Summation: Given a number N and an array A of N numbers. Print the absolute summation of these numbers.
*/
// Solve this support session
#include <stdio.h>

int main()
{
    // ---------Code Here........
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    printf("%d", abs(sum));

    return 0;
}


/*
    Search: Given a number N and an array A of N numbers. Determine if the number X exists in array A or not and print its position (0-index). (see concept-2)
*/ 
#include <stdio.h>
#include <limits.h>

int main()
{
    // ---------Code Here........
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int x;
    scanf("%d", &x);

    int search = -1;

    for (int i = 0; i < n; i++)
    {
        // printf("Value: %d  Index: %d \n", arr[i], i);
        if (arr[i] == x)
        {
            search = i;
            break;
        }
        }

    printf("%d", search);

    return 0;
}


/*
    Replacement: Given a number N and an array A of N numbers. Print the array after doing the following operations:
*/ 
