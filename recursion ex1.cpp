#include <iostream>

using namespace std;

int Sum(int n){
    if(n==0){
        return 0;
    }

    int prevSum = Sum(n-1);
    return n + prevSum;
}

int main(){
    int n;

    cin>>n;

    int ans;

    ans = Sum(n);

    cout<<ans<<endl;

    return 0;
}