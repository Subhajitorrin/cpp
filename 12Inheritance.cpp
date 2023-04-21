/*Inheritance*/
/*
Inheritance is a way of creating new classes based on existing classes. 
The new class inherits the properties and behaviors of the existing class, 
and can add new features or modify the inherited ones.
*/
#include <bits/stdc++.h>
using namespace std;
class a //base class or super class
{
public:
    int x;
    void display1()
    {
        cout << x << endl;
    }
};
class b : public a // derived or subclass
{
public:
    int y;
    void display2()
    {
        cout << x << " " << y << endl;
    }
};
int main(void)
{
    // class a
    a aa;
    aa.x = 5;
    aa.display1();

    // class b
    b bb;
    bb.x = 10;
    bb.y = 15;
    bb.display1();
    bb.display2();
    return 0;
}
