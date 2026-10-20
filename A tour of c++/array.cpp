#include<iostream>
using namespace std;
int main(){
    int vec[6];
    for(int i=0;i<6;i++)vec[i]=i;
    int* p=&vec[0];
    cout<<(*p)<<endl;
    p++;
    cout<<(*p)<<endl;

    int x{5};
    int& ref{x};
    cout<<ref<<endl;
    ref++;
    cout<<ref<<" "<<x<<endl;
    x++;
    cout<<ref<<" "<<x<<endl;
    // ref is reference to int x, so basically its an alias. modification to either will change the value for both since they both point to same memory address.
}