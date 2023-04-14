/*Parameterized constructor*/
#include<bits/stdc++.h>
using namespace std;
class rectangle{
    private:
        int length,bredth;
    public:
    /*Parameterized constructor*/
        rectangle(int l,int b){
            length=l,bredth=b;
        }
    /*Property Functions*/
    //mutator
    void setLengthBredth(){
        cin>>length>>bredth;
        if(!(length>=0||bredth>=0)){
            length=0,bredth=0;
        }
    }
    //accessor
    int getlength(){
        return length;
    }
    int getbredth(){
        return bredth;
    }
    /*Member functions*/
    int rectangle_area(){
        return length*bredth;
    }
    int rectangle_perimeter(){
        return 2*(length+bredth);
    }
};
int main(){
    rectangle a(5,6);
    //cout<<"Enter length and bredth: ";
    //a.setLengthBredth();
    cout<<"Area is: "<<a.rectangle_area()<<endl;
    cout<<"Perimeter is: "<<a.rectangle_perimeter()<<endl;
    return 0;
}