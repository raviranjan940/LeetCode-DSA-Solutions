class Solution {
public:
    bool isPalindrome(int x) {
        string Num = to_string(x);
        string ans = Num;
        reverse(Num.begin(), Num.end());
        return ans == Num;
    }
};
