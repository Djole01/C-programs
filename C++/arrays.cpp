#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter Size ";
    cin>>n;
    int A[n];
    A[0]=2

    for(int x:A)            // For each loop.
    {
        cout<<x<<endl;      // First element is 2, the rest are garbage.
    }

    return 0;
}
