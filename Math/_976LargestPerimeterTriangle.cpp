//
// Created by mapicccy on 2019/4/28.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class _976LargestPerimeterTriangle {
public:
    int largestPerimeter(vector<int>& A) {
        sort(A.begin(), A.end());

        for (int i = A.size() - 3; i >= 0; i--) {
            if (A[i + 2] < A[i + 1] + A[i])
                return A[i] + A[i + 1] + A[i + 2];
        }
        return 0;
    }
};
/*
int main(int argc, char **argv)
{
    auto *item = new _976LargestPerimeterTriangle;
    vector<int> A = {3, 6, 2, 3};
    cout << "ret: " << item->largestPerimeter(A);
}*/
