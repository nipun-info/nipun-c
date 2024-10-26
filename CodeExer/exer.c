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
// You will be given a positive integer N, you need to print from 1 to N and besides the value, print Yes or No. Print Yes if the value is divisible by 5 and print No otherwise.