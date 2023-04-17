/*Addition and Subtraction of two complex numbers*/
#include<bits/stdc++.h>
using namespace std;
class complexNumber{
    int real,imag;
    public:
        void setdata(){
            cout<<"Enter real and imaginary part: ";
            cin>>real>>imag;
        }
        void getdata(){
            cout<<real<<"+"<<imag<<"i"<<endl;
        }
        //+ operator overloading
        complexNumber operator+(complexNumber bb){
            complexNumber cc;
            cc.real=real+bb.real;
            cc.imag=imag+bb.imag;
            return cc;
        }
        //- operator overloading
        complexNumber operator-(complexNumber bb){
            complexNumber cc;
            cc.real=real-bb.real;
            cc.imag=imag-bb.imag;
            return cc;
        }
};
int main(){
    complexNumber aa,bb,cc;
    aa.setdata();
    bb.setdata();
    aa.getdata();
    bb.getdata();
    cout<<"\nAddition: ";
    cc=aa+bb;
    cc.getdata();
    cout<<"\nSubtraction: ";
    cc=aa-bb;
    cc.getdata();
    return 0;
}