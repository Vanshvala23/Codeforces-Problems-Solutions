# Codeforces 304A - Pythagorean Theorem II

## Problem Statement
Given an integer \( n \), count the number of right-angled triangles with integer side lengths \( a \), \( b \), and \( c \) (where \( c \) is the hypotenuse) such that:
- \( a^2 + b^2 = c^2 \),
- \( 1 \leq a \leq b \leq c \leq n \).

**Problem Link:** [304A - Pythagorean Theorem II](https://codeforces.com/problemset/problem/304/A)

## Approach
1. **Brute-force with Optimization**:
   - Iterate over all possible \( a \) and \( b \) (where \( a \leq b \)).
   - Compute \( c = \sqrt{a^2 + b^2} \).
   - If \( c \) is an integer and \( c \leq n \), count it as a valid triple.

2. **Mathematical Insight (Euclid's Formula)**:
   - Pythagorean triples can be generated using:
     \[
     a = m^2 - k^2, \quad b = 2mk, \quad c = m^2 + k^2
     \]
   - This avoids redundant checks and directly generates valid triples.

## Solution Code
### C++
```cpp
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
