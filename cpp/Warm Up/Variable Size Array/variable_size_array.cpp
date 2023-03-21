#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// for string delimiter
vector<int> split(string s, string delimiter) {
    
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<int> res;

    while ((pos_end = s.find(delimiter, pos_start)) != std::string::npos) {
        token = s.substr (pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back (stoi(token));
    }

    res.push_back (stoi(s.substr (pos_start)));
    return res;
}

int main() {
    vector<int> size;
    vector<vector<int>> varLenArray;
    
    string str,token;
    size_t pos = 0;
    string delimiter = " ";  
    getline(cin,str);
    size = split(str," ");
    
    for( int ii=0; ii<size[0]; ++ii){
        vector<int> temp;
        getline(cin,str);
        temp=split(str," ");
        varLenArray.push_back(temp);
    }
    
    for( int jj=0; jj<size[1]; ++jj){
        vector<int> temp;
        getline(cin,str);
        temp=split(str," ");
        cout << varLenArray[temp[0]][(temp[1]+1)]<<endl;
    }
    return 0;
}
