#include <cstdio>
#include <string>
#include <iostream>
using namespace std;


int main()
{
    // Write your code here
    int n;
    string word[9]={"one","two","three","four","five","six","seven","eight","nine"};
    cin>>n;
    if(n<1){
        cout<< "out of bounds";
    } else if(n<=9){
        cout<< word[n-1];
    } else if (n< 10e9){
        cout<< "Greater than 9";
    } else{
        cout<< "out of bounds";
    }
    return 0;
}
