#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin>>N;
    if ((N<1) || (N>1000)) {
        cout<< "Value of N not acceptable ";}
    int arr[N];
    for (int i=0; i<N; i++){
        cin>>arr[i];
        if ((arr[i]<1) || (arr[i]>10000)) {
        cout<< "Value of array element not acceptable ";}
    }
    for (int i=N; i>0; i--){
        cout<<arr[i-1]<<" ";
    }
    
    return 0;
}