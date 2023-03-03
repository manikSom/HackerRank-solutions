#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin >> a >> b;
    string num[] ={"one","two","three","four","five","six","seven","eight","nine"};
    for (int i=a; i<=b; i++){
        if((i>=1) && (i<=9)){
            cout<<num[i-1]<<endl; 
        } else if(i>9){
            if(i%2 ==0){cout<<"even"<<endl;}
            else {cout<<"odd"<<endl;}
        } else{
            cout<< "Not a non zero positive integer";
            return 0;
        }
    }
    return 0;
}
