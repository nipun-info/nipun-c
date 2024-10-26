
/*************************************
      Week-03: Conceptual Session-1 
https://github.com/phitronio/Conceptual-Sessions-Code/blob/main/Batch%206/C/Week%204-1/0-Topics.txt

**************************************/
//------------ CodeExaple-1:Insert c 2 number index

#include <stdio.h>
#include <string.h>

int main()
{
    char word[8];

    scanf("%s", word);

    for (int i = 6; i >= 2; i--)
    {
        word[i + 1] = word[i];
    }

    word[2] = 'c';

    printf("%s", word);

    return 0;
}

//------------ CodeExaple-2: Delect c 2 number index

#include <stdio.h>
#include <string.h>

int main()
{
    char word[8];

    scanf("%s", word);

    for (int i = 3; i <= 6; i++)
    {
        word[i] = word[i + 1];
    }

    printf("%s", word);

    return 0;
}

/**************
Given a number N and an array A of N numbers. Print the array in a reversed order.
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
**************/ 
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }


    int left = 0, right = n-1;

    while(left < right){
        int temp = a[left];
        a[left] = a[right];
        a[right] = temp;

        left++;
        right--;
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}


/**************
Given a number N and an array A  of N numbers. Determine if it's palindrome or not.
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
**************/ 
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int l = 0, r = n - 1;

    int pal = 1;

    while (l <= r)
    {

        if (a[l] != a[r])
        {
            pal = 0;
            break;
        }

        l++; // l k shamner dike niye gesi
        r--; // r k pechoner dike niye ashchi
    }

    if (pal == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

/************** SUM DIGITS **********************
Given a number N and an array A of N digits (not separated by space). Print the summation of these digits.
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K
************************************************/ 
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char num[n + 1];

    scanf("%s", num);

    long long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int digit = num[i] - '0';
        sum = sum + digit;
    }

    printf("%d", sum);

    return 0;
}

