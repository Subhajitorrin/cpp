/*Operator overloading using friend function*/
#include<bits/stdc++.h>
using namespace std;
class complexNumber{
    int real,imag;
    public:
        void setdata(){
            cout<<"Enter real and imiganary number: ";
            cin>>real>>imag;
        }
        void getdata(){
            cout<<real<<"+"<<imag<<"i"<<endl;
        }
        friend complexNumber operator+(complexNumber aa,complexNumber bb);
};
complexNumber operator+(complexNumber aa, complexNumber bb){
    complexNumber cc;
    cc.real=aa.real+bb.real;
    cc.imag=aa.imag+bb.imag;
    return cc;
}
int main(){
    complexNumber aa,bb,cc;
    aa.setdata();
    bb.setdata();
    aa.getdata();
    bb.getdata();
    cc=aa+bb;
    cc.getdata();
    return 0;
}