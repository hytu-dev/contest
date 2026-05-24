class Solution {
public:
    int passwordStrength(string password) {
        unordered_set<char> pwd(password.begin(), password.end());
        int ans = 0;

        for (char c : pwd) {
            if (islower(c)) { ans += 1; }
            if (isupper(c)) { ans += 2; }
            if (isdigit(c)) { ans += 3; }
            if (c == '!' || c == '@' || c == '#' || c == '$') { ans += 5; }
        }

        return ans;
    }
};
