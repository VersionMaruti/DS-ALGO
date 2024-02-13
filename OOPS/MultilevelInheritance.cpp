#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void student ::set_roll_number(int r)
{
    roll_number = r;
}
void student ::get_roll_number()
{
    cout << "Roll number of the student is " << roll_number << endl;
}

class marks : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks();
};
void marks ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void marks ::get_marks()
{
    cout << "Marks in maths are " << maths << endl;
    cout << "Marks in physics are " << physics << endl;
}

class result : public marks
{
protected:
    float percentage;

public:
    void display()
    {
        get_roll_number();
        get_marks();
        cout << "The result of the student is " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    /*
    If we are inheriting class B from A and C from B :- [A--->B--->C]
    1.A is the base class for B and B is the class for C.
    2.A--->B--->C is called inheritance path.
    */
    result L;
    L.set_roll_number(420);
    L.set_marks(94.3, 90.7);
    L.display();
    return 0;
}