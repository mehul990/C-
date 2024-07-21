#include <iostream>
using namespace std;
class employee{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a1,int b1,int c1);
        void getdata(){
            cout<<"the values of a is"<<a<<endl;
            cout<<"the values of b is"<<b<<endl;
            cout<<"the values of c is"<<c<<endl;
            cout<<"the values of d is"<<d<<endl;
            cout<<"the values of e is"<<e<<endl;

        
    }
    void employee::setdata(int a1,int b1,int c1){
        a=a1;
        b=b1;
        c=c1;
        
    }

};
int main() {
    employee harry;
    harry.d=56;
    harry.e=89;
    harry.setdata(1,2,4);
    // harry.c=5;
    // harry.d=8;
    // harry.e=89;
    harry.getdata();
    return 0;

}