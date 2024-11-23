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
    Student rahim(50, 5, 3.2);

    cout << rahim.roll <<  " " << rahim.cls << " " << rahim.gpa << endl;

    return 0;

}





/*(1️⃣2️⃣3️⃣4️⃣5️⃣6️⃣7️⃣8️⃣9️⃣🔟)
   
    6️⃣AM - 🔟AM = 3️⃣H
    3️⃣PM - 8️⃣PM = 3️⃣H

*/