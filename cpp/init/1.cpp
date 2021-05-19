#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int a,b;

    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    cout<<"Sum = "<<a+b<<endl;

    cout<<sizeof(int)<<endl;
    cout<<sizeof(float)<<endl;
    cout<<sizeof(char)<<endl;
    cout<<sizeof(bool)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<sizeof(long int)<<endl;
    cout<<sizeof(short int)<<endl;
    cout<<sizeof(signed int)<<endl;
    cout<<sizeof(unsigned int)<<endl;

    return 0;
}