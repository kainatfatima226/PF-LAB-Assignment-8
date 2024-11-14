#include<iostream>
using namespace std;
int main(){
    char colour;
    cout<<"Enter a colour R,G,Y:";
    cin>>colour;
    switch(colour){
        case 'R':
        cout<<"Stop";
        break;
        case 'G':
        cout<<"Go";
        break;
        case 'Y':
        cout<<"Slow down";
        break;
        default:
        cout<<"invalid colour";
        break;
    }
}