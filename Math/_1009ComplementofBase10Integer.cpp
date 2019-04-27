//
// Created by mapicccy on 2019/4/27.
//

#include <iostream>
#include <complex>

using namespace std;

class _1009ComplementofBase10Integer {
public:
    //不是最优解，应该通过异或取代pow
    int bitwiseComplement(int N) {
        int p = N, i = 0;
        while (p != 0) {
            i++;
            p = p >> 1;
        }

        return pow(2, i) - N - 1;
    }

    //利用glib内置函数，取1之前的0个数
    int bitwiseComplement2(int N) {
        int p = __builtin_clz(N);
        return ((0x80000000U >> (p - 1)) - 1) ^ N;
    }
};
/*
int main(int argc, char **argv)
{
    auto *item = new _1009ComplementofBase10Integer;
    cout << "ret: " << item->bitwiseComplement2(0) << endl;
}*/