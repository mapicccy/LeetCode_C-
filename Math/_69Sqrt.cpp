//
// Created by mapicccy on 2019/4/27.
//

#include <iostream>

using namespace std;

class _69Sqrt {
public:
    //这种方法并不是最优，但打败了98%的人
    int mySqrt(int x) {
        //如果i类型int会报错
        long i;
        for (i = 0; i <= x; i++) {
            if (i * i  > x)
                break;
        }
        return i - 1;
    }

    //牛顿法是二分法效率的10倍，好好看看牛顿法原理
    int mySqrt2(int x) {
        long i = x;
        while (i * i > x) {
            i = (i + x / i) /2;
        }
        return i;
    }
};
/*
int main(int argc, char **argv)
{
    auto *item = new _69Sqrt;
    cout << "ret: " << item->mySqrt2(63) << endl;
}*/