//
// Created by mapicccy on 2019/9/1.
//
#include <string>
using namespace std;

class Solution {
public:
    int numDistinct(string s, string t) {
        long dp[t.size() + 1][s.size() + 1] = {0};
        for (int i = 0; i <= s.size(); i++)
            dp[0][i] = 1;
        for (int i = 1; i <= t.size(); i++) {
            for (int j = 1; j <= s.size(); j++) {
                dp[i][j] = dp[i][j - 1] + (s.at(j - 1) == t.at(i - 1) ? dp[i - 1][j - 1] : 0);
            }
        }

        return (int)dp[t.size()][s.size()];
    }
};