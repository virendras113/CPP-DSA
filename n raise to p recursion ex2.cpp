#include <iostream>

using namespace std;

int nraisep(int n,int p){
    if(p==0){
        return 1;
    }

    int prevmul = nraisep(n,p-1);

    return n*prevmul;
}

int main(){
    int n;
    int p;
    cin>>n;
    cin>>p;

    int ans;
    ans = nraisep(n,p);

    cout<<ans<<endl;

    return 0;
}