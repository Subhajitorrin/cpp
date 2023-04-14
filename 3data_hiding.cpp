#include<bits/stdc++.h>
using namespace std;
class rectangle{
    private:
        int length,bredth;
    public:
    /*Property Functions*/
    //Mutator
        void setLength(int l){
            if(l>=0) length=l;
            else length=0;
        }
        void setBredth(int b){
            if(b>=0)bredth=b;
            else bredth=0;
        }
    //Accessor
        int getLength(){
            return length;
        }
        int getBredth(){
            return bredth;
        }
    /*Working Functions*/
    int rectangle_area(){
        return length*bredth;
    }
    int rectangle_perimeter(){
        return 2*(length+bredth);
    }
};
int main(){
    rectangle a;
    a.setLength(5);
    a.setBredth(7);
    cout<<"Area of rectangle: "<<a.rectangle_area()<<endl;
    cout<<"Perimeter of rectangle: "<<a.rectangle_perimeter();
    return 0;
}