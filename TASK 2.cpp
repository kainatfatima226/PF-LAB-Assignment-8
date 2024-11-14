#include<iostream>
using namespace std;
int main(){
     int num1,num2;
cout<<"Enter two numbers";
cin>>num1>>num2;
char opr;
cout<<"Enter +,-,/,*";
cin>>opr;
switch(opr){
case '-':
     cout<<num1-num2<<endl;
     break;
case '+':
     cout<<num1+num2<<endl;
     break;
case '/':
     cout<<num1/num2<<endl;
     break;
case '*':
     cout<<num1*num2<<endl;
     break;
Default:
cout<<"invalid opr"<<endl;
}
return 0;
}


