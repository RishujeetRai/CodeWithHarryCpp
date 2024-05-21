#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream out;       // to write in the file
    out.open("77sample1.txt");       // opening a file: will be opened in writing mode because of object out
    // same as: ofstream out("77sample.txt");
    // open() is a member fn of class ofstream/ifstream which is derived from their base class fstreambase
    // we could use constructor of ofstream and opened the file in writing mode while declaring the object
    // or we can access the open() member fn of the class ofstream through the object out

    // file is now open for use (in writing mode)
    out<<"Sore ga Niiiceeeee\n";
    out<<"Hmmmmmm\n";
    out<<"Nani wo surunda, Kakyoinnnnnn!!!";
    out.close();        // using close() member fn of ofstream to close the file

    ifstream in;        // to read from a file
    in.open("77sample1.txt");       // opening a file: will be opened in writing mode because of object in
    // same as: ifstream in("77sample.txt");
    string s1, s2, s3;
    in>>s1>>s2>>s3;     // will only get the words, not the spaces or the enters
    cout<<s1<<endl;     // will print the first word
    cout<<s2<<endl;     // will print the second word
    cout<<s3<<endl;     // will print the third word
    getline(in, s1);
    getline(in, s2);
    getline(in, s3);
    cout<<s1<<endl;     // will print the first line of string after the strings which have already been printed
    // will print the linereak if that's all whcih is left from the previous line
    cout<<s2<<endl;     // will print the next line
    cout<<s3<<endl;     // will print the next, next line: will print nothing if there are no more lines
    // will print the linereak if that's all which is left from the last line
    in.close();        // using close() member fn of ifstream to close the file

    return 0;
}