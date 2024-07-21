#include <iostream>
#include <cmath>
using namespace std;
class SimpleCalculator {
    int a, b;
    public:
        void getDataSimple()
        {
            cout<<"Enter the value of a"<<endl;
            cin>>a;
            cout<<"Enter the value of b"<<endl;
            cin>>b;
        }

        void performOperationsSimple(){
            cout<<"The value of a + b is: "<<a + b<<endl;
            cout<<"The value of a - b is: "<<a - b<<endl;
            cout<<"The value of a * b is: "<<a * b<<endl;
            cout<<"The value of a / b is: "<<a / b<<endl;
        }
};
class ScientificCalculator{
    int a, b;

    public:
        void getDataScientific()
        {
            cout << "Enter the value of a" << endl;
            cin >> a;
            cout << "Enter the value of b" << endl;
            cin >> b;
        }

        void performOperationsScientific()
        { 
            cout << "The value of cos(a) is: " << cos<int>(a) << endl;
            cout << "The value of sin(a) is: " << sin<int>(a) << endl;
            cout << "The value of exp(a) is: " << exp<int>(a) << endl;
            cout << "The value of tan(a) is: " << tan<int>(a) << endl;
        }
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator{
    
};
int main()
{
    HybridCalculator calc;
    calc.getDataScientific();
    calc.performOperationsScientific();
    calc.getDataSimple();
    calc.performOperationsSimple();
    
    return 0;
}
