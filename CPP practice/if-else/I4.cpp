#include<iostream>
using namespace std;
int main()
{ 
    int a,b,c;
    cout<<"Enter the total amount of purchase units:-"<<endl;
    cin>>a;
    
    if(a>1000){
        b=a/10;
        c=a-b;
        cout<<"Amount to pay after discount is:-1"<<c<<endl;
    }
    else{
        cout<<"Total amount to pay:-"<<a<<endl;
    }
    return 0;
}