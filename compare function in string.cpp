#include <iostream>
#include <string>

using namespace std;

int main(){
    string s1 = "abc";
    string s2 = "xyz";

    cout<<s2.compare(s1)<<endl;

    string s3 = "abc";
    string s4 = "abc";

    if(s3.compare(s4) == 0){
        cout<<"the strings are equal"<<endl;
    }

    return 0;

}