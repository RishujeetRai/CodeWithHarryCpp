#include<iostream>
#include<vector>
using namespace std;

static int j=1;

template <class T>
void display(vector<T> &v){           // vector<int> &v   :  syntax for vector as parameter
    cout<<"Displaying the vec"<<j<<": ";
    for(int i=0; i<v.size(); i++){
        // cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";             // v.at(i) is same as v[i]
    }
    cout<<endl;
    j++;
}

int main(){
    vector<int> vec1;           // zero length integer vector
    display(vec1);
    vector<char> vec2(4);       // 4-element char vector
    display(vec2);
    vec2.push_back('X');        // inserting a char into vec2: (push_back so at the end, at 1st if its empty)
    vector<char> vec3(vec2);    // 4-element char vector from vec2
    display(vec3);
    vector<int> vec4(6, 4);     // inserting 6 4s into integer vector vec4
    display(vec4);
    cout<<vec4.size();          // will display the size of vec4

    return 0;
}