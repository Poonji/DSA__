#include<iostream>
using namespace std;

void printSum(int arr[3][3],int row,int col){
    cout<<"printing sum ->"<<endl;
    for(int col=0;col<3;col++){
        int sum=0;
        for(int row=0;row<3;row++){
            sum+=arr[row][col];
        }
        cout<<sum<<" ";
    }

}
int main(){
    int arr[3][3];
    cout<<"enter the array\n"; 
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col];
        }
    }
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    printSum(arr,3,3);
    return 0;
}