class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        string copy = str;
        reverse(copy.begin(), copy.end());
        return str == copy;
    }
};





class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        int l = 0, r = str.size() - 1;
        while (l <= r) {
            if (str[l] != str[r]) return false;
            l++, r--;
        }
        return true;
    }
};





class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        long long copy = x;
        long long rev = 0;
        while (copy) {
            rev = rev * 10 + copy % 10;
            copy /= 10;
        }
        return rev == x;

    }
};





class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || x != 0 && x % 10 == 0) return false;

        int rev = 0;
        while (x > rev) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return (x == rev || x == rev / 10);
    }
};