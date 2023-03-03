#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int i;
    long l;
    char ch;
    float f;
    double d;
    
    scanf("%d %ld %c %f %lf",&i,&l,&ch,&f,&d);
    printf("%d\n%ld\n%c\n%0.3f\n%0.9lf",i,l,ch,f,d);
    
    return 0;
}