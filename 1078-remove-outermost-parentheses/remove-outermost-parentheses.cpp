class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int cnt = 0;

        for (char ch : s) {
            if (ch == '(') {
                cnt++;
                if (cnt > 1)
                    res += ch;
            }
            else {
                if (cnt > 1)
                    res += ch;
                cnt--;
            }
        }

        return res;
    }
};