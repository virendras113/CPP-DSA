#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;
    int p=n-1;
    bool flag=true;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[p-i]){
            flag=false;
            break;
        }
    }
    if(flag == true){
        cout<<"the given word is a plaindrome"<<endl;
    }else{
        cout<<"the given word is not a palindrome"<<endl;
    }
}