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
int CountPythagorusTriangle(int n)
{
    int count=0;
    for(int a=1;a<=n;a++)
    {
        for(int b=a;b<=n;b++)
        {
            int csq=a*a+b*b;
            int c=sqrt(csq);
            if(c>n)
            {
                continue;
            }
            if(c*c==csq)
            {
                count++;
            }
        }
    }
    return count;
}
int main() {
    fastIO();
    int n;
    cin>>n;
    cout<<CountPythagorusTriangle(n)<<endl;
    return 0;
}