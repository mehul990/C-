#include <iostream>
using namespace std;
struct employee{
    int id;
    int data;
    int number;
};
int main() {
    struct employee harry;
    harry.id=5;
    harry.data=56;
    harry.number=235;
    cout<<harry.id<<endl;
    cout<<harry.data<<endl;

    return 0;
}
