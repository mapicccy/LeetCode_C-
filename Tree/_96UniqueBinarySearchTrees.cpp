//
// Created by mapicccy on 2019/8/31.
//
#include <iostream>

using namespace std;

class _96UniqueBinarySearchTrees {
public:
    int numTrees(int n) {
        int dp[n + 1] = {0};
        dp[0] = 1;
        dp[1] = 1;
        for (int i = 2; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                dp[i] += dp[j - 1] * dp[i - j];
            }
        }

        return dp[n];
    }
};
/*
int main(int argc, char *argv[]) {
    auto item = new _96UniqueBinarySearchTrees();
    cout << item->numTrees(4) << endl;
}*/