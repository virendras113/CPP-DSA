#include <iostream>
using namespace std;

int fact(int num){
    int sum1=1;
    for(int i=2;i<=num;i++){
        sum1*=i;
    }
    return sum1;
}

int main(){
    int n;
    cin>>n;
    int ans1=fact(n);
    cout<<ans1<<endl;
}