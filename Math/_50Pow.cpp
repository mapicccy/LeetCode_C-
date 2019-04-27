//
// Created by mapicccy on 2019/4/27.
//
#include <iostream>

using namespace std;

class _50Pow {
public:
    double myPow(double x, int n) {
        double ret = 1.0;
        long long p = n;
        if (n < 0) {
            x = 1 / x;
            p = -p;
            // 如果使用这种方式，这一行报错，-2147483648无法用int呈现
            //p = -n;
        }

        while (p != 0) {
            // 奇数个的时候乘到ret上，偶数个自乘. 如果所有的都乘到ret上回timeout
            if (p & 1)
                ret *= x;
            x *= x;
            p >>= 1;
        }
        return ret;
    }
};
/*
int main(int argc, char **argv)
{
    auto *item = new _50Pow;
    cout << "ret: " << item->myPow(1.0, -2147483648) << endl;
}*/