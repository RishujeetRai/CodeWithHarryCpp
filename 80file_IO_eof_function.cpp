#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream out;                   // to open in writing mode
    out.open("77sample1.txt");      // to open the file under the object out
    int i = 0;
    while(i<10){            // printing 10 lines muda
        out<<"muda\n";
        i++;
    }
    out.close();                    // to close the file under the out object

    ifstream in;                    // to open in reading mode
    in.open("77sample1.txt");       // to open the file under the object out
    string st;
    // using eof() member fn of the fstreambase class or it's derived class ifstream/ofstream
    while(in.eof()==0){             // meaning: run this while loop till eof is encountered (end of file)
        in>>st;                     // getting the next string into st from file
        cout<<st<<endl;             // printing the string acquired in st consecutively
        // we are breaking line after the printing of each continous string acquired in st
        // we can use getline(in, st) to print line by line and then break line after printing each line
    }
    in.close();                     // to close the file under the in object
    return 0;
}

// getline prints whitespaces too, until linebreak is met