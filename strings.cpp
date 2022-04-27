#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string str1,str2,str3;
    cin>>str1>>str2;
    int strlen1 = str1.size();
    int strlen2 = str2.size();
    cout<<strlen1<<" "<<strlen2<<endl;
    str3 = str1+str2;
    cout<<str3<<endl;
    char a,b;
    a = str2[0];
    b = str1[0];
    str1[0] = a;
    str2[0] = b;
    cout<<str1<<" "<<str2<<endl;
    return 0;
}