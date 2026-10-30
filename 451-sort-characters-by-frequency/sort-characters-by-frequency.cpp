class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int, char>> pq;
        unordered_map<char, int> mp;
        for( auto ch : s)
        {
            mp[ch]++;
        }

        for( auto it : mp)
        {
            pq.push({it.second, it.first});
        }

        string result = "";
        pair<int, char> temp;
        while(!pq.empty())
        {
            temp = pq.top();
            pq.pop();

            result += string(temp.first, temp.second);
        }
        return result;
    }
};