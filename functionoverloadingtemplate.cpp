#include <iostream>
using namespace std;
template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display()
    {
        cout << data;
    }
};
template <class T>
void Harry<T> :: display(){
    cout<<data;
}
int main() {
    
{
    Harry<int> h(5.7);
    cout << h.data << endl;
    h.display();
    return 0;
}

    return 0;
}