#include<iostream>
#include<map>
using namespace std;
int main(){
    // Map is an associative array
    map<string,int> mapMArks;       // string will be this map's first and int will be second
    mapMArks["Bhumi"] = 23;
    mapMArks["Swami"] = 24;
    mapMArks["Nami"] = 53;
    mapMArks["Kami"] = 99;

    mapMArks.insert({{"King Crimson", 999}, {"Piccolo", 34}});      // syntax for insert

    map<string,int> :: iterator iter;
    for(iter = mapMArks.begin(); iter != mapMArks.end(); iter++){
        // iter is now pointing to a position in the map
        cout<<(*iter).first<<": "<<(*iter).second<<endl;
    }

    cout<<"The size of the map is: "<<mapMArks.size()<<endl;
    cout<<"The max size of the map is: "<<mapMArks.max_size()<<endl;
    cout<<"The empty's return value is: "<<mapMArks.empty()<<endl;      // no empty values so returns 0
    return 0;
}