

/*******************************
   Week-02:Conceptual Session-01
*******************************/
//--------Problem-1:
#include <stdio.h>

int main()
{
    int holiday;
    scanf("%d", &holiday);

    if (holiday >= 3)
    {
        printf("Cox's Bazar\n");

        if (holiday > 3)
        {
            printf("Go to Saint Martin\n");
        }
        else
        {
            printf("Cox's Bazar ei thakbo\n");
        }
    }
    else if (holiday >= 2)
    {
        printf("Sylhet\n");
    }
    else
    {
        printf("Stay Home");
    }

    return 0;
}

/**********Lucky Numbers*************
   Codeforces Problem-4: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I
   A number of two digits is lucky if one of its digits is divisible by the other.
   For example, 39, 82, and 55 are lucky, while 79 and 43 are not.
   Given a number between 10 and 99, determine whether it is lucky or not.
   
   Input
   Only one line containing a single number N (10≤N≤99).
   
   Output
   Print "YES" if the given number is lucky, otherwise print "NO".

***********************/
#include <stdio.h>
#include <limits.h>

int main()
{
    int n;

    scanf("%d", &n);

    int first_digit = n / 10;
    int second_digit = n % 10;

    if(first_digit % second_digit == 0 || second_digit % first_digit == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    return 0;
}


/********** Fixed Password *************
   Codeforces Problem-5: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D
   Given multiple lines each line contains a number X which is a password. Print "Wrong" if the password 
   is incorrect otherwise, print "Correct" and terminate the program.
   Note: The "Correct" password is the number 1999.
   
   Output
   Print "Wrong" if the password is typed wrong otherwise, print "Correct" if the password is 
   typed correctly.

***********************/
#include <stdio.h>

int main()
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        if (n == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}

/********** Max *************
   Codeforces Problem-5: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
   Given a number N, and N numbers, find maximum number in these N numbers.

Input
First line contains a number N (1 ≤ N ≤ 103).

Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

Output
Print the maximum number.
   
***********************/
#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int maxium_value = INT_MIN;
    // printf("%d\n", maxium_value);

    for(int i = 0; i < n; i++)
    {
        int x; 
        scanf("%d", &x);

        // printf("%d %d\n", maxium_value, x);

        if(maxium_value < x) {
            maxium_value = x;
        }
        
        // printf("latest: %d\n", maxium_value);
    }

    printf("%d\n", maxium_value);
   
    return 0;
}

