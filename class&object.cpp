//Area and Perimeter of a rectangle
#include<bits/stdc++.h>
using namespace std;
//class of rectangle
class rectangle{
    private://private variables, can only be accessed by class functions
    int length,bredth;
    public://public functions
    int setLengthBredth(){
        cout<<"Enter length and bredth of your rectangel: "<<endl;
        cin>>length>>bredth;
    }
        int rectangle_area(){//function to get area
            return length*bredth;
        }
        int rectangle_perimeter(){//function to get perimeter
            return {2*(length+bredth)};
        }
};
int main(){
    rectangle a; //object of the class rectangle
    a.setLengthBredth();//taking input for the length and bredth
    cout<<"Area of your rectangle: "<<a.rectangle_area()<<endl;
    cout<<"Perimegter of your rectangle: "<<a.rectangle_perimeter();
    return 0;
}
