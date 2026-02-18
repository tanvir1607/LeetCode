class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1, size = digits.size();
        vector<int> ans(size);
        for (int i = size - 1; i >= 0; i--) {
            int sum = digits[i] + carry;
            int digit = sum % 10;
            carry = sum / 10;
            ans[i] = digit;
        }
        if (carry) ans.insert(ans.begin(), carry);
        return ans;
    }
};