#include <iostream>
using namespace std;

int main(){

    double a;
    double b;
    double c;

    cout<<"Enter first number: ";
    cin>>a;

    cout<<"Enter second number: ";
    cin>>b;

    cout<<"Enter third number: ";
    cin>>c;

    if (a>b){
        if(a>c){
            cout<<"Number one, that is "<<a<<" is GREATEST one"<<endl;
        }
        else{
            cout<<"Number three, that is "<<c<<" is GREATEST one"<<endl;
        }
    }
    else{
        if(b>c){
            cout<<"Number two, that is "<<b<<" is GREATEST one"<<endl;
        }
        else{
            cout<<"Number three, that is "<<c<<" is GREATEST one"<<endl;
        }
    }

    return 0;

}