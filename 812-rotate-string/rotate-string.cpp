class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size())
            return false;
        int n = s.size();
 
        for(int i = 0; i< s.size();i++)
        {
            char c = s[s.size()-1];
            s.pop_back();
            s=c+s;
            if(s == goal) return true;
        }
        return false;
    }
};