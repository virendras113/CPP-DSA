#include <iostream>

using namespace std;

int gcd(int a, int b){
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}

int main(){
    int a;
    int b;

    cin>>a>>b;

    int ans;

    ans=gcd(a,b);

    cout<<ans<<endl;
}