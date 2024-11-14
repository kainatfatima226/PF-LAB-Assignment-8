#include<iostream>
using namespace std;
int main(){
    char letter;
    cout<<"Enter a single letter";
    cin>>letter;
    switch(letter){
    case 'A':
    cout<<"Excellent"<<endl;
    break;
    case 'B':
    cout<<"Good"<<endl;
    break;
    case 'C':
    cout<<"Star"<<endl;
    break;
    case 'D':
    cout<<"Satisfactory"<<endl;
    break;
    case 'E':
    cout<<"only pass"<<endl;
    break;
     case 'F':
    cout<<"Fail"<<endl;
    break;
    Default:
    cout<<"invalid grade"<<endl;
    }
}