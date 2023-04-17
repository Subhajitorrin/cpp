#include<bits/stdc++.h>
using namespace std;
class student{
    private:
        string name;
        int roll;
        int math,phy,chem;
    public:
        student(string name,int roll, int math, int phy, int chem){
            this->name=name;
            this->roll=roll;
            this->math=math;
            this->phy=phy;
            this->chem=chem;
        }
        int total(){
            return math+phy+chem;
        }
        char grade(){
            float avg=total()/3;
            if(avg>60){
                return 'A';
            }else if(avg>=40&&avg<=60){
                return 'B';
            }else{
                return 'C';
            }
        }
};
int main(){
    string n;
    int r,m,p,c;
    cout<<"Enter student name: ";getline(cin,n);
    cout<<"Enter roll no: ";cin>>r;
    cout<<"Enter marks of math physics chemistry: ";
    cin>>m>>p>>c;
    student aa(n,r,m,p,c);
    cout<<"Total marks: "<<aa.total()<<endl<<"Grade: "<<aa.grade();
    return 0;
}