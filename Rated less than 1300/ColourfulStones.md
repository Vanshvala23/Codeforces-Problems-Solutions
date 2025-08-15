# Codeforces 265A – Colorful Stones (Simplified Edition)

## Problem Statement
You are given two strings:
- `s`: a sequence of stones, each colored 'R', 'G', or 'B',
- `t`: a sequence of instructions, each being one of 'R', 'G', or 'B'.

A squirrel named Liss starts on the **first** stone (position 1). She processes each instruction in `t` sequentially:
- If the instruction matches the color of the stone she is currently standing on, she moves one stone to the right.
- Otherwise, she stays in place.

Determine the **final 1‑based position** of Liss after all instructions.

**Problem Link:** [265A – Colorful Stones (Simplified Edition)](https://codeforces.com/problemset/problem/265/A)

---

## Constraints
- 1 ≤ |s|, |t| ≤ 50
- Colors are represented by characters 'R', 'G', or 'B'
- Liss never moves beyond the last stone

---

## Examples

**Input:**
```
RGB
RRR
```
**Output:**
```
2
```
**Explanation:**  
- Start at position 1 ('R').  
- Instruction 1: 'R' matches ⇒ moves to position 2 ('G').  
- Instruction 2: 'R' doesn’t match 'G' ⇒ stays.  
- Instruction 3: 'R' doesn’t match 'G' ⇒ stays.  
Final position: **2**.

---

**Input:**
```
RRRBGBRBBB
BBBRR
```
**Output:**
```
3
```
**Explanation:**  
Liss moves only when instruction matches current stone:
- Instructions: B B B R R
- Only the first two B’s don't move her (stones are R); the third B still doesn’t match.
- Then 'R' matches stone 1 → move to stone 2; next 'R' matches stone 2 → move to stone 3.
Final position: **3**.

---

## Approach
Simulate Liss’s movement:
1. Initialize `position = 0` (0-indexed).
2. For each instruction in `t`:
   - If `s[position] == instruction`, increment `position`.
3. At end, convert to 1‑based: output `position + 1`.

**Time Complexity:** O(|t|)  
**Space Complexity:** O(1)

---

## Solution Code (C++)
```cpp
/*
    Author: ToTo__
    Problem: Codeforces 265A – Colorful Stones (Simplified Edition)
    Link: https://codeforces.com/problemset/problem/265/A
*/

#include <bits/stdc++.h>
using namespace std;

inline void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    fastIO();
    string s, t;
    cin >> s >> t;
    int position = 0;  // 0-indexed

    for (char c : t) {
        if (s[position] == c) {
            position++;
        }
    }

    cout << (position + 1) << "\n";  // Convert to 1-based index
    return 0;
}
```

---

## Key Takeaways
- **Straightforward simulation**—just match characters and move.
- Since both strings are short (≤ 50), this runs in negligible time.
- Boundary safety is guaranteed by problem constraints.
