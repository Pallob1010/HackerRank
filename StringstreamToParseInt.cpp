#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    // Complete this function
    string singleword="";
     
    int p=0;
    vector<int>item;

     for (auto x : str) 
   { 
       if(x==','){
           stringstream met(singleword);
           met>>p;
           item.push_back(p);
           singleword="";
           continue;
       }
       else{
           singleword+=x;
       }
       
   }
   stringstream met(singleword);
   met>>p;
   item.push_back(p);
   
   return item;  
 
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

