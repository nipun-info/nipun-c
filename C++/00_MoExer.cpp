
/*
    🪴🪴🪴🪴 MO-1: Basic C++ 🪴🪴🪴🪴
*/

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

