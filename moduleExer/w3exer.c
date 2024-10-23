
// ===== 09.2: Copy of an Array =======
#include <stdio.h>

int a[100000], b[100000];

int main()
{
    int length1 = 0, length2 = 0;

    scanf("%d", &length1);

    for(int i =0; i < length1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Before Copy:\n");

    for(int i =0; i < length1; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    for(int i = 0; i < length1; i++)
    {
        printf("%d ", b[i]);
    }

    printf("\n");

    a[2] = 100;

    for(int i = 0; i < length1; i++){
        b[i] = a[i];
    }

    // a[2] = 100;

    printf("After Copy:\n");

    for(int i =0; i < length1; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    for(int i = 0; i < length1; i++)
    {
        printf("%d ", b[i]);
    }
    
    return 0;
}

// ===== 09.3: Array Insertion =======
#include <stdio.h>

int a[10000];

int main()
{
    int length;

    scanf("%d", &length);

    for(int i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }

    int index, value;

    scanf("%d %d", &index, &value);


    length++;

    for(int i = length - 1; i >= index; i--)
    {
        a[i+1] = a[i];
    }

    a[index] = value;

    for(int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}

// ===== 09.4: Eleting an Element from an Array =======

#include <stdio.h>

int a[10000];

int main()
{
    int length;

    scanf("%d", &length);

    for(int i = 0; i < length; i++)
    {
        scanf("%d ", &a[i]);
    }

    int index;
    scanf("%d", &index);

    if(index < 0 || index >= length)
    {
        printf("Wrong index input \n");     // validation check
        return 0;
    }

    for(int i = index; i < length - 1; i++)
    {
        a[i] = a[i + 1];
    }

    length--;

    for(int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }

    
    return 0;
}

// ===== 09.5:  =======
