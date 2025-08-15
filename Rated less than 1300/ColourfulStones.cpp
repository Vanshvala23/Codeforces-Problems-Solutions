/*
    Author: ToTo__
*/

#include <bits/stdc++.h>
using namespace std;

inline void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    fastIO();
    string s,t;
    cin>>s>>t;
    int pos=0;
    for(char ch:t)
    {
        if(s[pos]==ch)
            pos++;
    }
    cout<<pos+1<<endl;
    return 0;
}