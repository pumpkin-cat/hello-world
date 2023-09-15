#include <iostream>
#include <string.h>

using namespace std;


class Solution {
public:
    int dp[50000+1];
    int ans = 1;
    int lengthOfLongestSubstring(string s) {
        if(s == "")
            return 0;
            
        for(int i = 1; i < s.length(); ++i){
            dp[i] = 1;
            if(s.substr(i-dp[i-1], dp[i-1]).find(s.substr(i, 1)) == string::npos){
                dp[i] = dp[i-1]+1;
                cout << s.substr(i-dp[i-1], dp[i-1]) << endl;
                ans = max(ans, dp[i]);
            } 
        }
        return ans;
    }
};

Solution s;

int main(){
    string tmp;
    cin >> tmp;
    cout << s.lengthOfLongestSubstring(tmp) << endl;
}