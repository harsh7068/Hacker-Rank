#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */       int n;
    cin>>n;
    vector<int>v;
    for (int i=1; i<=n; i++) {
    int temp;
    cin>>temp;
    v.push_back(temp);
    }
    int q;
    cin>>q;
    int a,b;
    cin>>a>>b;
    v.erase(v.begin()+q-1);
    v.erase(v.begin()+a-1, v.begin()+b-1);
    cout<<v.size()<<endl;
    for(auto it:v)
        cout<<it<<" ";
    cout<<endl;
    return 0;
}
