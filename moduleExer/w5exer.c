/******* Week05: MO-17 ********
 *** Function and Recursion ***
 ******************************/ 

//=============== 17.2: Function In C



//=============== 17.3: Return + Parameter

#include <stdio.h>

int add(int a, int b)
{
    printf("Function Called\n");

    int sum = a + b;

    return sum;
}

int main()
{

    // int result = add(10, 20);
    // printf("%d\n", result);

    printf("Before\n");

    printf("%d\n", add(20, 20));

    printf("%d\n", add(80, 20));

    printf("After\n");

    return 0;
}


//=============== 17.4: Return + No Parameter
// ----------- Explame-1:
#include <stdio.h>

int a, b;

int add()
{
    printf("Function called\n");

    int sum = a + b;

    return sum;
}

int main()
{
    a = 25, b = 55;

    // printf("%d\n", add());

    a = 5, b = 505;
    // printf("%d\n", add());

    // printf("%d\n", add());
    
    return 0;
}

// ----------- Explame-2:
#include <stdio.h>

int a, b;

int add()
{
    printf("Function called\n");

    int a = 5, b = 10;

    int sum = a + b;

    return sum;
}

int main()
{
    a = 25, b = 55;
    // printf("%d\n", add());

    a = 5, b = 505;
    // printf("%d\n", add());

    return 0;
}

#include <stdio.h>

int add()
{
    printf("Function called\n");

    int a, b;
    scanf("%d %d", &a, &b);

    int sum = a + b;

    return sum;
}

double getPi()
{
    return 3.14589;
}

int main()
{
    printf("%lf\n", getPi());
    
    // printf("%d\n", add());
    // printf("%d\n", add());

    return 0;
}


//=============== 17.5: No Return + Parameter
// -------Explam-1:
#include <stdio.h>

void sum(int a, int b)
{
    printf("Function called\n");

    int sum = a + b;

    printf("%d\n", sum);

    // return;
    printf("hi");
}

int main()
{

    int a, b;

    scanf("%d %d", &a, &b);

    sum(a, b);

    return 0;
}

// ------------ Example -2:
#include <stdio.h>

void alphaCheck(char ch)
{
    if ('a' <= ch && ch <= 'z')
    {
        printf("Lower Case\n");
    }
    else
    {
        printf("Upper Case\n");
    }
}

int main()
{

    alphaCheck('A');
    alphaCheck('a');

    return 0;
}



//=============== 17.6: No Return + No Parameter
#include <stdio.h>

void sum()
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("Function called\n");

    int sum = a + b;

    printf("%d\n", sum);

}

void greeting()
{
    printf("Good Morning\n");
}

int main()
{
    greeting();
    
    // sum();

    return 0;
}


//=============== 17.7: Usefull Built in Function
#include <stdio.h>

int main()
{
    double a = 10.999, b = 10.111;

    printf("%0.3lf || %0.3lf\n", ceil(a), ceil(b));

    printf("%0.3lf || %0.3lf\n", floor(a), floor(b));

    printf("%0.3lf || %0.3lf\n", round(a), round(b));

    printf("%0.3lf || %0.3lf\n", sqrt(81), sqrt(-21));

    printf("%.3lf || %.3lf\n", pow(3, 3));

    return 0;
}


//=============== 17.8: Variable Scope
#include <stdio.h>


void add(int a, int b)
{

  printf("Inside function: %p %p\n", &a, &b);

  int temp = a;
  a = b;
  b = temp;
}

int main()
{

  int a = 5, b = 6;

  printf("main function: %p %p\n", &a, &b);

  add(a, b);

  printf("%d %d", a, b);

  return 0;
}

// ------------Example: Global scope
#include <stdio.h>

// Global scope
int a, b;

void add()
{

  printf("Inside function: %p %p\n", &a, &b);

  int temp = a;
  a = b;
  b = temp;
}

int main()
{

  // int a = 5, b = 6;

  printf("main function: %p %p\n", &a, &b);

  add(a, b);

  printf("%d %d", a, b);

  return 0;
}



//=============== 17.9: Pointers with Function
#include <stdio.h>

// void swap(int a, int b)  // copy of main a, b

void swap(int *x, int *y) // reference of main a, b
{
  printf("Func: %p %p\n", x, y);

  int temp = *x;
  *x = *y;
  *y = temp;
}

int main()
{
  int a = 5, b = 6;

  swap(&a, &b);

  printf("main: %p %p\n", &a, &b);

  printf("%d %d\n", a, b);

  return 0;
}















/******* Week05: MO-18 ********
 *** Function and Recursion ***
 ******************************/ 