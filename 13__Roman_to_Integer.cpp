class Solution {
public:
    int romanToInt(string s) {
        map<char, int> Map = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int ans = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (i > 0 && Map[s[i-1]] < Map[s[i]] ) {
                ans += Map[s[i]] - Map[s[i-1]];
                i--;
            } else {
                ans += Map[s[i]];
            }
        }
        return ans;
    }
};