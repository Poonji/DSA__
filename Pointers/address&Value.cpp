#include<iostream>
using namespace std;
int main()
{
    int num=5;
    cout<<num<<endl;
    cout<<"address of num is"<<&num<<endl;
    int *ptr=&num;
    cout<<"address is :"<<ptr<<endl;
    cout<<"value is:"<<*ptr<<endl;

    double d=4.3;
    double*p2=&d;
     cout<<"address is :"<<p2<<endl;
    cout<<"value is:"<<*p2<<endl;

    //to know the size occupied
    cout<<"size of integer is"<<sizeof(num)<<endl;
    cout<<"size of pointer is"<<sizeof(ptr)<<endl;
    cout<<"size of pointer is"<<sizeof(p2)<<endl;
    cout<<"size of float is"<<sizeof(d)<<endl;

int n=5;
int a=n;
a++;
int *p=&n;
(*p)++;
int arr[10]={2,5,6,3};
cout<<"1st"<<*arr<<endl;
cout<<"2nd"<<*arr+1<<endl;
cout<<"1st"<<*(arr+1)<<endl;
cout<<"1st"<<*(arr)+1<<endl;


//copying the pointer
int *q=p;
cout<<p<<"--" <<q <<endl;
cout<<*p<<"--" <<*q <<endl;





    return  0;
}
