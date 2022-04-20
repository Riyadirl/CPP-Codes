#include<iostream>
using namespace std;
int main(){
    int farn,cels;
    cout<< "enter Celsius :";
    cin>> cels;

    farn = 1.8 * cels + 32;
    cout<<"farenheit :"<<farn;

    cout<<"\nEnter farenheit :";
    cin >>farn;
    
    cels= farn-32 /1.8;
    cout<<"Celsius :"<<cels;
}


