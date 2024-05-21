#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){           // vector<int> &v   :  syntax for vector as parameter
    for(int i=0; i<v.size(); i++){
        // cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";             // v.at(i) is same as v[i]
    }
    cout<<endl;
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

    vector<int> :: iterator i = vec1.begin();       // defining an iterator i
    // in the scope of the vector class
    // i = vec1.begin()    :   i points to first position of the vector vec1
    display(vec1);
    vec1.insert(i, 566);        // insert 566 at position i of the vector vec1
    display(vec1);
    vec1.insert(i, 5, 88);        // insert 88 five times from position i in the vector vec1
    display(vec1);

    // // NO IDEA WHAT THE PROBLEM IS WITH THIS LINE OF CODE
    // vec1.insert(i+4, 66);        // insert 66 at 4th position from i in the vector vec1
    // display(vec1);

    return 0;
}