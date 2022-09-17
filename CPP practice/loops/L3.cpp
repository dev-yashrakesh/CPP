#include<iostream>
using namespace std;
int main()
{
    int num1,a=0;
    cout<<"Enter a number to check whether no. is prime or not:-"<<endl;
    cin>>num1;

    for(int i=1;i<=num1;i++){
        if (num1%i==0)
        {
            a++;
        }
    }
    if(a==2){
        cout<<"The given number is a prime number"<<endl;
    }
    else{
        cout<<"The given number is not prime number"<<endl;
    }
    
    return 0;
}