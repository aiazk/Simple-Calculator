#include <iostream>
using namespace std;
int main() {
    float num1;
    float num2;
    string multip;

    cout<<"Simple Calculator\nEnter number 1"<<endl;
    cin>>num1;
    cout<<"Enter number 2"<<endl;
    cin>>num2;
    cout<<"Enter Calculation(+,-,*,/)"<<endl;
    cin>>multip;

    if (multip=="+") {
        cout<<"Result is:"<<num1+num2<<endl;
    } else if(multip=="-") {
        cout <<"Result is:" << num1-num2 << endl;
    }else if(multip=="/") {
        cout <<"Result is:" << num1/num2 << endl;
    }else if(multip=="*") {
        cout <<"Result is:" << num1*num2 << endl;
    } else
        cout<<"Error"<<endl;
    }
