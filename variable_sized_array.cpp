#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,q;
    cin>>n>>q;
    vector<vector<int> > v;
    while (n--) {
    vector<int>inV;
    int size ;
    cin>>size;
    for (int i=0; i<size; i++) {
    int temp;
    cin>>temp;
    inV.push_back(temp);
    }
    v.push_back(inV);
    } 
    while (q--) {
    int a,b;
    cin>>a>>b;
    cout<<v[a][b]<<endl;
    }
    return 0;
}
