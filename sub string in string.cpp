#include <iostream>
#include <string>

using namespace std;

int main(){
    string s1;
    s1 = "virendra";
    string s2;

    s2 = s1.substr(5,3);

    cout<<s2<<endl;

    return 0;
}