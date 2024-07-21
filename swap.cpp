#include <iostream>
using namespace std;
void swap(int&a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main() {
    int x=4,y=5;
    cout<<"the value of x is "<<x<<"is this and the value of y is "<<y<<"is this"<<endl;
// cin>>x>>y;
swap(x,y);
    cout<<"the value of x is "<<x<<"is this and the value of  y is"<<y<<"is this"<<endl;

    return 0;
}