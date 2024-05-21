#include<iostream>
#include<list>
using namespace std;

void display(list<int> &l1){
    list<int> :: iterator it;
    for(it=l1.begin(); it!=l1.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> list1;            // syntax for zero length list

    list1.push_back(4);
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(7);
    list1.push_back(8);
    display(list1);
    list1.pop_back();
    display(list1);
    list1.pop_front();
    display(list1);
    list1.remove(6);        // would remove 6 from the list, will remove all the 6s if there are more than one
    display(list1);
    return 0;
}