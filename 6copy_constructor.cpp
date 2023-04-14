/*copy constructor*/
#include<bits/stdc++.h>
using namespace std;
//first class
class rectangle1{
    public:
    int length,bredth;
    void setLengthBredth(int l,int b){
        length=l,bredth=b;
    }
    void getLengthBredth(){
        cout<<"Length: "<<length<<endl<<"Bredth: "<<bredth<<endl;
    }
};
class rectangle2{
    int len,bre;
    public:
    //copying the values of rectangle1 to rectangle2 default values
        rectangle2(rectangle1&aa){
            len=aa.length;
            bre=aa.bredth;
        }
        void getLengthBredth(){
        cout<<"Length: "<<len<<endl<<"Bredth: "<<bre<<endl;
    }
};
int main(){
    rectangle1 aa;
    aa.setLengthBredth(5,6);
    aa.getLengthBredth();
    cout<<endl;
    rectangle2 bb(aa);
    bb.getLengthBredth();
    return 0;
}