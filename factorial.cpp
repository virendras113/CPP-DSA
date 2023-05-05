#include<iostream>
#include<cmath>
using namespace std;

void fact(int num){
    int sum;
    sum=0;
    for(int i=num;i>0;i--){
        sum=sum+i;
    }
    cout<<sum<<endl;
}

int main(){
    int n;
    cin>>n;

    fact(n);

    return 0;
}