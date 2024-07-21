#include<iostream>
#include<functional>
#include<algorithm>
 
using namespace std;
 
int main(){
 
    // Function Objects (Functor) : A function wrapped in a class so that it is available like an object
    int arr[] = {1, 73, 4, 2, 54, 7};
    sort(arr,arr+5);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
 
    return 0;
}
// syntax for sortinga d object -->
// sort(address of first element, address of last element);

// sorting in desecending order we use the below function -->
// sort( arr, arr+6, greater< int >( ));
