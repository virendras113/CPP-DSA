#include <iostream>

using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }

    int prevfact = fact(n-1);

    return n*prevfact;
}

int main(){
    int n;
    cin>>n;

    int ans;
    ans = fact(n);

    cout<<ans<<endl;

    return 0;
}