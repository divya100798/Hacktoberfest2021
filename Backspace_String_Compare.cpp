#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*Given two strings s and t,
return true if they are equal
when both are typed into empty text editors.
'#' means a backspace character.

Note that after backspacing an empty text,
the text will continue empty.



Example 1:

Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".
*/

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char > s1, t1;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '#' && !s1.empty()) {
                s1.pop();
            }
            else if (s[i] != '#') {
                s1.push(s[i]);
            }
        }
        for (int i = 0; i < t.size(); ++i) {
            if (t[i] == '#' && !t1.empty()) {
                t1.pop();
            }
            else if (t[i] != '#') {
                t1.push(t[i]);
            }
        }
        while (!s1.empty() && !t1.empty()) {
            if (s1.top() != t1.top()) return false;
            else s1.pop(), t1.pop();
        }
        if (s1.empty() && t1.empty()) return true;
        else return false;
    }
};

int main() {
    string s, t;
    cin >> s >> t;
    Solution ob;
    cout << ob.backspaceCompare(s, t) << '\n';
    return 0;
}
