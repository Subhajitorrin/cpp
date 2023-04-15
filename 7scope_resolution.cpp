/*Scope resolution operator*/
#include<bits/stdc++.h>
using namespace std;
class rectangle{
    int length,bredth;
    public:
        rectangle(int l,int b){
            length=l,bredth=b;
        }
        int area(){
            return length*bredth;
        }//this function will replace to the main
        int perimeter();//function prototype
};
int rectangle::perimeter(){//function definition
    return 2*(length+bredth);
}//this funtion will be work seperately, will not replaced to the main
int main(){
    rectangle aa(5,6);
    cout<<"Area is: "<<aa.area()<<endl;
    cout<<"Perimeter: "<<aa.perimeter()<<endl;
    return 0;
}