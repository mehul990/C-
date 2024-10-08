#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){ 
    vector<int> vec1;
    int element, size;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this vector: ";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);    
    return 0;
}
// for iterator!!
// display(vec1);
//     vector<int> :: iterator iter = vec1.begin();
//     vec1.insert(iter,566);
//     display(vec1);

// output
// Enter the size of your vector
// 3
// Enter an element to add to this vector: 5  
// Enter an element to add to this vector: 3
// Enter an element to add to this vector: 7
// 5 3 7 
// 566 5 3 7
// PS D:\MyData\Business\code playground\C++ course>
// creating a vector in the stl in following ways ---
    vector<int> vec1;      //zero length integer vector
    vector<char> vec2(4);  //4-element character vector
    vector<char> vec3(vec2);//4-element character vector from vec2
    vector<int> vec4(6,3); //6-element vector of 3s