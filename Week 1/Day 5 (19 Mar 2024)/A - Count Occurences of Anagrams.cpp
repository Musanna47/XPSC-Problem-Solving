//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    vector<int> a(26), b(26);
	    int sz1 = pat.size();
	    int sz2 = txt.size();
	    for (int i = 0; i < sz1; i++) {
	        a[pat[i] - 'a']++;
	    }
	    for (int i = 0; i < sz1; i++) {
	        b[txt[i] - 'a']++;
	    }
	    int ans = (a == b);
	    for (int i = 0, j = sz1; j < sz2; i++, j++) {
	        b[txt[i] - 'a']--;
	        b[txt[j] - 'a']++;
	        ans += (a == b);
	    }
	    return ans;
	}

};