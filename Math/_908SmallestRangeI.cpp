//
// Created by mapicccy on 2019/5/3.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class _908SmallestRangeI {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int mn = A[0], mx = A[0];
        for(auto a : A) {
            if (a < mn) mn = a;
            if (a > mx) mx = a;
        }
        return max(0, mx - mn - 2 * K);
    }
};
/*
int main(int argc, char **argv)
{
    auto *item = new _908SmallestRangeI;
    vector<int> A = {0, 10};
    cout << "ret: " << item->smallestRangeI(A, 2);
}*/