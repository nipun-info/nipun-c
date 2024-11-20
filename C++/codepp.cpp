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

int main()
{
    Student rahim(45, 5, 3.2);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    
    return 0;
}





/*  (1️⃣2️⃣3️⃣4️⃣5️⃣)
    03:00pm - 11:55pm = 50@min X 05@times(2️⃣3️⃣4️⃣5️⃣)
*/