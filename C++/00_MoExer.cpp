
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

    x % 2 == 0 ? cout << "Even\n" : cout << "Odd\n";

    return 0;
}

// 🪂🪂🪂🪂 Switch in C++

// 🪂🪂🪂🪂 Min, Max, Swap

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
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
    cout << max(a, b) << endl;

    // find minimum number of multiple numbers
    cout << min({3, 5, 8, 9, 75}) << endl;

    // find maximum number of multiple numbers
    cout << max({3, 5, 8, 9, 75}) << endl;

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

    swap(a, b);

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
    cout << s << endl; // print: Hello

    cin.getline(s, 100);
    cout << s << endl; // print: Hello world

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

    cout << x << endl
         << s << endl;

    return 0;
}

// 🪂🪂🪂🪂 Summary and bits header file
#include <bits/stdc++.h>

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
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Allocate memory for an integer
    int *p = new int;

    // Assign a value to the allocated memory
    *p = 100;

    cout << *p << endl;

    // Free the allocated memory
    delete p;

    return 0;
}

// ----------- Example-02
#include <bits/stdc++.h>
using namespace std;

int *p;

void func()
{
    // Static variable
    // int x = 10;
    // p = &x;
    // cout << "Fun -> " << *p << endl;

    // Dynamic variable
    int *x = new int;
    *x = 100;
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
🪴🪴🪴🪴 MO-2:5: Practice Day 🪴🪴🪴🪴
*******************************************************/
/*
    M. Capital or Small or Digit: Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.
    https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
*/

/*
    C. Simple Calculator: Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.
    https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C
*/

/*
    F. Reversing (solve using swap() function): Given a number N and an array A of N numbers. Print the array in a reversed order.
    https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
*/

/*
    K. Max and Min : Given 3 numbers A, B and C, Print the minimum and the maximum numbers.
    https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int minimum = min({a, b, c});
    int maximum = max({a, b, c});

    cout << minimum << " " << maximum << endl;

    return 0;
}

/*
    E. Max (solve using max() function):Given a number N, and N numbers, find maximum number in these N numbers.
    https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        // if (a[i] > max)
        //     max = a[i];

        mx = max(a[i], mx);
    }

    cout << mx << endl;

    return 0;
}

/******************************************************
🪴🪴🪴🪴 MO-3: Class and Object in C++ 🪴🪴🪴🪴
*******************************************************/
// 🪂🪂 What is Class and Object 🪂🪂

// 🪂🪂 How to declare class and object 🪂🪂

// 🪂🪂 Working with class and object 🪂🪂
// --------Example-1:
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    // Student a;
    // a.roll = 20;
    // a.gpa = 4.5;
    // char temp[100] = "robin";
    // strcpy(a.name, temp);

    // cout << a.name << " " << a.roll << " " << a.gpa << endl;

    return 0;
}

/*
example-2:
input:
nahid 99 4.58
habib 74 4.98

*/ 
#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    // Student a, b;
    // cin >> a.name >> a.roll >> a.gpa;
    // cin >> b.name >> b.roll >> b.gpa;
    
    // cout << a.name << " " << a.roll << " " << a.gpa << endl;
    // cout << b.name << " " << b.roll << " " << b.gpa << endl;

    return 0;
}



// 🪂🪂 Constructor and its Simulation 🪂🪂
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main()
{
    Student rahim(45, 5, 3.2);
    Student karim(2, 8, 4.2);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}

// 🪂🪂 This keyword and Arrow sign 🪂🪂
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        // this->roll = roll;
        // this->cls = cls;
        // this->gpa = gpa;

        (*this).roll = roll;
        (*this).cls = cls;
        (*this).gpa = gpa;
    }
};

int main()
{
    Student rahim(40, 5, 3.2);
    Student karim(2, 8, 4.2);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}

// 🪂🪂 Return object from function 🪂🪂
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student fun()
{
    Student rahim(40, 5, 3.2);
    return rahim;
}

int main()
{
    Student obj = fun();
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;

    return 0;
}

// 🪂🪂 Why we need dynamic object 🪂🪂
// Below code return garbase value
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student* fun2()
{
    Student rahim(40, 5, 5.0);
    Student* p = &rahim;
    return p;
}

int main()
{
    Student* p = fun();
    cout << p->roll << " " << p->cls << " " << p->gpa << endl;

    return 0;
}
// 🪂🪂 Dynamic Object 🪂🪂

// 🪂🪂 Sort function in C++ 🪂🪂




































/******************************************************
🪴🪴🪴🪴 MO-3: Dynamic Memory Allocation 🪴🪴🪴🪴
*******************************************************/