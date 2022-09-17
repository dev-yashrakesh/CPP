#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if((age<18) && (age>0)){
        cout<<"You r not eligible for the party"<<endl;
        
    }

    else if(age==18){
        cout<<"You will get kid pass for party"<<endl;
    }

    else if(age<1){
        cout<<"You r not born yet"<<endl;
    }

    else{
        cout<<"You r eligible for the party"<<endl;
    }
    return 0;
}