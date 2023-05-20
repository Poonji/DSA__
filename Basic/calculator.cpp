#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the value of a and b\n";
    cin>>a>>b;
    char op;
    cout<<"enter the operation you want to perform\n";
    cin>>op;
    switch(op){
        case '+':cout<<(a+b)<<endl;
        break;
        case '-':cout<<(a-b)<<endl;
        break;
        case '*':cout<<(a*b)<<endl;
        break;
        case '/':cout<<(a/b)<<endl;
        break;
        default:
    cout<<"wrong input\n";
    }
    getch(); 


    


}