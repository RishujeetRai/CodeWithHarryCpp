#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // ofstream to write in a file
    ofstream out("77sample1.txt");     // connecting the file to the out stream

    string stando;
    cout<<"Enter your stand name: ";
    cin>>stando;         // only gets the first continous string, nothing after the space or enter

    out<<"Ore no stando no namae wa "+stando;        // writing the string into the file using the out stream
    // will only write the mentioned string and the first continous string from stando
    out.close();        // closing the connection of the file to the out stream

    // ifstream to read from a file
    ifstream in("77sample1.txt");

    string st;
    // in>>st;         // will only get the first continous string
    getline(in, st);
    cout<<st;
    in.close();        // closing the connection of the file to the in stream
    return 0;
}