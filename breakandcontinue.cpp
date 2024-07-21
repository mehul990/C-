#include <iostream>
using namespace std;
int main() {
    for(int i=0;i<4;i++){
        cout<<i<<endl;
        if(i==2){
            continue;
       } // cout<<i<<endl;
    }
    return 0;
}
// in break statement if cout is outside the loop then it will not print the break number unless it will print the the exct limit for the loop whereas in the continue statementif the cout is written in the loop then the loop will be printed if outside the continu vaue is terminatted
