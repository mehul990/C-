#include <iostream>
using namespace std;
int fib(int n){
    if(n<2){
        return 1;
    }return fib(n-2)+fib(n-1);
}
int main ()
{
    int a;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"the fibonacci position at a position  " <<a<< "is"<<fib(a);

    return 0;
}