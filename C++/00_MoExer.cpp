
/******************************************************
🪴🪴🪴🪴 MO-1: Basic C++ 🪴🪴🪴🪴
*******************************************************/

// 🪂🪂🪂🪂 Welcome to C++ For DSA

// 🪂🪂🪂🪂 Introduction and Setup

// 🪂🪂🪂🪂 How to Print in C++
#include <iostream>

int main()
{
    std ::cout << "Nipun!!! \n";

    int x = 10;
    double y = 35.655;
    char c = 'A';

    std ::cout << x << " " << y << " " << c << "\n\n";

    std ::cout << x << std::endl
               << y << std::endl
               << c << std::endl;

    std::cout << "My FAV ID is " << x;
    return 0;
}

// 🪂🪂🪂🪂 How to take input in C++, Typecasting
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    char c;
    double d;
    int ascii = 'A';

    // input from file
    cin >> x >> y >> c >> d;

    cout << x << endl
         << y << endl
         << c << endl
         << d << endl;
    cout << ascii;

    return 0;
}

// ******** TypeCasting Example
#include <iostream>
using namespace std;

int main()
{
    // Typecasting
    char c = 'a';
    int y = 65;
    cout << "Character: " << c << endl
         << "Convert Int: " << (int)c << endl;
    cout << y << endl
         << (char)y;

    return 0;
}

// 🪂🪂🪂🪂 EOF and Setprecision in C++
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Example: EOF
    int x;
    while (cin >> x)
    {
        cout << x << endl;
    }

    // Example: setprecision

    double d = 23.45678;
    cout << fixed << setprecision(3) << d << endl;

    return 0;
}

// 🪂🪂🪂🪂 If else and Ternary Operator
#include <iostream>
using namespace std;

int main()
{
    /*
    int x = 15;

    if(x % 2 == 0)
    {
        cout << "Even\n";
    }
    else
    {
        cout << "Odd\n";
    }
    */

    //***** Ternary Operator

    int x;
    cin >> x;

    x%2==0? cout << "Even\n" : cout << "Odd\n";

    return 0;
}





// 🪂🪂🪂🪂 Switch in C++

// 🪂🪂🪂🪂 Min, Max, Swap

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    // if(a < b)
    // {
    //     cout << a << endl;
    // }
    // else {
    //     cout << b << endl;
    // }

    // find minimum number of two numbers
    cout << min(a, b) << endl;

    // find max number of two numbers
    cout << max(a,b) << endl;

    // find minimum number of multiple numbers
    cout << min({3,5,8,9,75}) << endl;

    // find maximum number of multiple numbers
    cout << max({3,5,8,9,75}) << endl;

    return 0;
}

// -------- swapping the value
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    // int temp = a;
    // a = b;
    // b = temp;

    swap(a,b);

    cout << a << " " << b << endl;

    return 0;
}


// 🪂🪂🪂🪂 String in C++
#include <iostream>
using namespace std;

int main()
{
    char s[100];

    cin >> s;
    cout << s << endl;  // print: Hello

    cin.getline(s, 100);   
    cout << s << endl;      // print: Hello world 


    return 0;
}

// -------- example-2:
#include <iostream>
using namespace std;

int main()
{
    int x;

    cin >> x;

    cin.ignore();

    char s[100];

    cin.getline(s, 100);

    cout << x << endl << s << endl;


    return 0;
}


// 🪂🪂🪂🪂 Summary and bits header file
#include<bits/stdc++.h>



/******************************************************
🪴🪴🪴🪴 MO-2: Dynamic Memory Allocation 🪴🪴🪴🪴
*******************************************************/

// 🪂🪂 Static vs Dynamic Memory 🪂🪂 

/*
https://chatgpt.com/c/673b1bd2-51c4-8007-b49b-94d4a9eb28f9
    Stack               |   Heap
    Static              |   Dyanamic
    Compile Time        |   Run Time
    Limited Memory      |   More Memory
    Auto memory clear   |   User Instructed

*/ 




// 🪂🪂 Dynamic Variable 🪂🪂 
// ----------- Example-01
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Allocate memory for an integer
    int *p = new int;

    // Assign a value to the allocated memory
    *p = 100;

    cout << * p << endl;

    // Free the allocated memory
    delete p;

    return 0;
}

// ----------- Example-02
#include<bits/stdc++.h>
using namespace std;

int* p;

void func()
{
    // Static variable
    // int x = 10;
    // p = &x;
    // cout << "Fun -> " << *p << endl;

    // Dynamic variable
    int* x = new int;
    *x  = 100;
    p = x;
    cout << "Fun -> " << *p << endl;
}


int main()
{
    func();

    cout << "Main -> " << *p << endl;

    return 0;
}


// 🪂🪂 Dynamic Array 🪂🪂 
#include <bits/stdc++.h>
using namespace std;

int main()
{

    // allocate menory for an array of intergers
    int *a = new int[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    // Free the allocated memory
    delete[] a;

    return 0;
}


// 🪂🪂 Dynamic Array Return From Function 🪂🪂 
#include <bits/stdc++.h>
using namespace std;

int *func1()
{
    int *a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    return a;
}

int main()
{
    int *x = func1();
    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << "\n";
    }

    return 0;
}


// 🪂🪂 Increase Size of Dynamic Array 🪂🪂 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int a[3];
    // int b[5];

    int *a = new int[3];
    int *b = new int[5];

    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 3; i++)
    {
        b[i] = a[i];
    }

    b[3] = 90;
    b[4] = 200;

    delete[] a;

    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " " << endl;
    }

    return 0;
}


// 🪂🪂 Summary 🪂🪂 

// Search snippet generator: https://snippet-generator.app/
// Select VSCode and input code and copied 
#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}
// go to setting snippet and paste the code and save
































/******************************************************
🪴🪴🪴🪴 MO-3: Dynamic Memory Allocation 🪴🪴🪴🪴
*******************************************************/