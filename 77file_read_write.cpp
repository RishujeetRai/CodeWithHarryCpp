#include<iostream>
#include<fstream>
/*
These are some useful classes for working with files in C++:
1.  fstreambase
2.  ifstream --> derived from fstreambase
3.  ofstream --> derived from fstreambase
*/

// In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
// 1.   Using the constructor
// 2.   Using the member function open() of the class

using namespace std;
int main(){
    // // Writing in a file using constructor of class ofstream (output stream)

    // string s1 = "ZAWARUDO no chikara";          // creating a string s1 to write from it
    // ofstream output("77sample1.txt");           // opening a file in writing mode under object output
    // // ofstream is a class and output is an object we have defined ourselves
    // // using the class ofstream, we have opened a file named 77sample1.txt in writing mode, under object output
    // output<<s1;      // write the string s1 into the file opened in writing mode under the oject output


    // Reading from a file using constructor of class ifstream (input stream)
    
    ifstream input("77sample2.txt");              // opening a file in reading mode under object input
    // ifstream is a class and intput is an object we have defined ourselves
    // using the class ifstream, we have opened a file named 77sample2.txt in reading mode, under object input
    string s2;              // creating a string s2 to write into it from the file
    input>>s2;              // write into string s2 from the file we opened in reading mode under object input
    cout<<s2;               // print the contents of now updated string s2
    // will only print the first continuous string from the file
    // becuase input>>s2 could write only the first continuous string from the file into the string s2
    getline(input, s2);     //will help writing the first full line from the file into the string s2
    // s2 which had the first continuous string from the file till now will get rewritten to hold the first line
    cout<<s2<<endl;         // print the contents of now updated string s2 (printing first line of the file)
    getline(input, s2);     // getline's second call so will now get the second line from the file into string s2
    // s2 will again get rewritten to hold the second line of the file
    cout<<s2;               // print the contents of now updated string s2 (printing second line of the file)
    return 0;
}