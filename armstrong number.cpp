#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;

    int digit=0;
    int digcube=0;
    int sum=0;
    int num=n;
    while(num>0){
        digit = num%10;
        digcube=digit*digit*digit;
        sum=sum+digcube;
        num=num/10;
    }
    cout<<sum<<endl;

    if(sum==n){
        cout<<"The given number is an armstrong number"<<endl;
    }else{
        cout<<"The given number is not an armstrong number"<<endl;
    }
}