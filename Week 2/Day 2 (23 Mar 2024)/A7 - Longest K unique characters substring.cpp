//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int l = 0, r = 0, n = (int) s.size();
        int ans = -1;
        map<char, int> window;
        while (l < n) {
            while (r < n && ((int)window.size() < k || window.count(s[r]))) {
                window[s[r]]++;
                r++;
            }
            if ((int)window.size() == k)
                ans = max(ans, r - l);
            window[s[l]]--;
            if (window[s[l]] == 0)
                window.erase(s[l]);
            l++;
        }
        return ans;
    }
};