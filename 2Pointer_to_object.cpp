/*
rectangle r; //creates an object on stack
rectangle *p = new rectangle(); //creates an object on heap
*/
#include<bits/stdc++.h>
using namespace std;
class rectangle{
    public:
        int length,bredth;//public variables
        int rectangle_area(){
            return length*bredth;
        }
        int rectangle_perimeter(){
            return {2*(length+bredth)};
        }
};
int main(){
    rectangle *ptr=new rectangle;//dynamic object created in heap
    /*
    rectangle a;//object a created on stack
    rectangle *ptr;//ptr pointer created of type rectangle
    ptr=&a;//ptr stores the address of object a
    */
    cout<<"Enter lenght & bredth: ";cin>>ptr->length>>ptr->bredth;
    cout<<"Area of rectangle: "<<ptr->rectangle_area()<<endl;
    cout<<"Perimeter of rectangle: "<<ptr->rectangle_perimeter()<<endl;
    return 0;
}
