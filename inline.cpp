#include <iostream>
using namespace std;
inline int product(int a,int b){
    return a*b+1;
}
int main() {
    int a,b;
    cout<<"the value of a and b is"<<endl;
    cin>>a>>b;
    cout<<"the product of a and b is "<<product(a,b);
    return 0;
}
// while using default argument the default argument will be placed at the extreme right 