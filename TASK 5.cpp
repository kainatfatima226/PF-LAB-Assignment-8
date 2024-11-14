#include<iostream>
using namespace std;
int main(){
    int choice;
    cout<<"1.Deposit"<<endl;
    cout<<"2.withdraw"<<endl;
    cout<<"3.check balance"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"Enter any choices";
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"Enter a Deposit amount"<<endl;
        break;
        case 2:
        cout<<"Enter a withdraw amount"<<endl;
        break;
        case 3:
        cout<<"please check balance"<<endl;
        break;
        case 4:
        cout<<"Exit"<<endl;
        break;
        default:
        cout<<"invalid option"<<endl;
        }
        }