#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){           // vector<int> &v   :  syntax for vector as parameter
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector<int> vec1;       // syntax for vector, notice how we don't have to mention a size
    int size, element;
    cout<<"Enter the size of your vector: ";
    cin>>size;
    for(int i=0; i<size; i++){
        cout<<"Enter an element to add to the vector: ";
        cin>>element;
        vec1.push_back(element);        // to add element at the end of the vector
    }
    vec1.pop_back();        // to delete the last element of the vector
    display(vec1);
    return 0;
}