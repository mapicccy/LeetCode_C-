//
// Created by mapicccy on 2019/4/21.
//
#include <iostream>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        long long ret = 0, tmp = x;
        while (tmp) {
            int n = tmp % 10;
            ret = ret * 10 + n;
            tmp /= 10;
        }

        return (ret > INT32_MAX || ret < INT32_MIN) ? 0 : (int)ret;
    }
};
/*
int main(int argc, char *argv[])
{
    auto *s = new Solution;
    int ret = s->reverse(-321);
    cout << "ret: " << ret << endl;
}*/