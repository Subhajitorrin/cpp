/*Inline function*/
#include<bits/stdc++.h>
using namespace std;
class rectangle{
    public:
        void fun1(){
            cout<<"Function 1 is inline"<<endl;
        }
        inline void fun2();
        void fun3();
};
void rectangle::fun2(){
    cout<<"Function 2 is inline"<<endl;
}
void rectangle::fun3(){
    cout<<"Function 3 is non-inline"<<endl;
}
int main(){
    rectangle aa;
    aa.fun1();
    aa.fun2();
    aa.fun3();
    return 0;
}
/*
By default all the functions that are written inside class is inline.
If ye put "inline" keyword before the return type then it will also inline.
If we wrote the function body outside of the class then it will non-inline.
*/