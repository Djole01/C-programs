#include <iostream>
#include <stdio.h>
using namespace std;

// struct definition
struct Rectangle
{
    int length;
    int width;
    char x;
};

int main()
{
    struct Rectangle r1={10,5}; 

    r1.length = 15;
    r1.width = 7;
    
    cout << r1.length<<endl;
    cout << r1.width<<endl;

    return 0;
}