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

    list1.push_back(8);
    list1.push_back(3);
    list1.push_back(9);
    list1.push_back(7);
    display(list1);

    list1.reverse();            // to reverse the list
    display(list1);             // will print the reversed list1

    list<int> list2(4);         // syntax for 4-element length list
    list<int>:: iterator iter2;
    iter2 = list2.begin();
    *iter2 = 10;
    iter2++;
    *iter2 = 12;
    iter2++;
    *iter2 = 34;
    iter2++;
    *iter2 = 11;
    display(list2);

    list1.sort();           // to sort the list
    list2.sort();           // to sort the list
    display(list1);         // will print the sorted list1
    display(list2);         // will print the sorted list2

    list1.merge(list2);
    display(list1);         // list1 is now list1 + list2
    display(list2);         // since list2 got merged into list1, list2 is now a void list

    return 0;
}