# Data Structures and Algorithms

[Neetcode.io](https://neetcode.io/practice)

[Junior Training Sheet - Competitive Programming](https://docs.google.com/spreadsheets/d/1iJZWP2nS_OB3kCTjq8L6TrJJ4o-5lhxDOyTaocSYc-k/edit?gid=84654839#gid=84654839)

[My Competitive Programming Training Sheet](https://docs.google.com/spreadsheets/d/1QXDzX45hHSb82_gBo1FXZaYpA0x4D3IrWZZrJrqewno/edit?usp=sharing)

[Advent of Code](https://adventofcode.com/)

---

**Codeforces C++ template**

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

}
    // Example of handling command-line arguments
    if (argc > 1) {
        cout << "Command-line arguments provided:\n";
        for (int i = 0; i < argc; ++i) {
            cout << "argv[" << i << "] = " << argv[i] << "\n";
        }
    } else {
        cout << "No command-line arguments provided.\n";
    }

    // Example problem-solving logic (replace with actual code)
    int t; // Number of test cases
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi arr(n);
        FOR(i, 0, n) cin >> arr[i];

        sort(all(arr));
        EACH(x, arr) cout << x << " ";
        cout << "\n";
    }

    return 0;
}
```
