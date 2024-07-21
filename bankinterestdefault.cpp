#include <iostream>
using namespace std;
float moneyreceived(int currentmoney,float factor=1.04){
    return currentmoney*factor;
}
int main() {
    int a,b;
    int money=10000;
    cout<<"if you have"<<money<<"in your account then you wil recieve "<<moneyreceived(money)<<"after 1 year in your account<<endl";
    cout<<"if you have "<<money<<"in you bank account then you will recieve"<<moneyreceived(money,1.10)<<"after 1 year in your account<<endl";

    return 0;
}
