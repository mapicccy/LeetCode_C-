//
// Created by mapicccy on 2019/5/6.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class _910SmallestRangeII {
public:
    int smallestRangeII(vector<int>& A, int K) {
        sort(A.begin(), A.end());

        int n = A.size(), mx = A[n - 1], mn = A[0], ret = mx - mn;
        for (int i = 0; i < n - 1; i++) {
            mx = max(mx, A[i] + 2 * K);
            mn = min(A[i + 1], A[0] + 2 * K);
            ret = min(ret, mx - mn);
        }

        return ret;
    }
};