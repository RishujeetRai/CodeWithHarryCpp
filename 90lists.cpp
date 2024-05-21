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

    list<int> :: iterator iter;     // creating an iterator for list
    iter = list1.begin();           // pointing the iterator to the first element of the list

    cout<<*iter<<" ";         // will print the element at the first position
    iter++;                         // iterator will now point at the second position

    cout<<*iter<<" ";         // will print the element at the second position
    iter++;                         // iterator will now point at the third position

    cout<<*iter<<" ";         // will print the element at the third position
    iter++;                         // iterator will now point at the fourth position

    cout<<*iter<<" ";         // will print the element at the fourth position
    iter++;                         // iterator will now point at the fifth position

    // since list1 is only of size 4, with no fifth element, iter will now again point at the first position
    cout<<*iter<<" ";         // will again print the element at the first position
    // we could add a fifth element, and hence expanded the list size, then above would print the 5th element

    cout<<endl;
    display(list1);

    // ANOTHER WAY TO CREATE A LIST
    list<int> list2(4);         // syntax for 4-element length list
    // note that list2(4) will create a list with four 0 elements, so don't use push_back to insert elements

    // so we will insert elements using iterators
    list<int>:: iterator iter2;
    iter2 = list2.begin();
    *iter2 = 24;
    iter2++;
    *iter2 = 25;
    iter2++;
    *iter2 = 26;
    iter2++;
    *iter2 = 27;
    display(list2);

    return 0;
}