class Solution {
public:
    int maxDepth(string s) {

        int cnt = 0;
        int res = 0;

        for (char ch : s)
        {
            if (ch == '(')
                cnt++;
                res = max(cnt,res);

            if( ch == ')')
                cnt--;

        }
        return res;
    }
};