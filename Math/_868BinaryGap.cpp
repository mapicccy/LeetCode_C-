//
// Created by mapicccy on 2019/5/5.
//

#include <iostream>

using namespace std;

class _868BinaryGap {
public:
    int binaryGap(int N) {
        int ret = 0;
        for (int d = -32; N; N /= 2, d++) {
            if (N % 2) ret = max(ret, d), d = 0;
        }

        return ret;
    }
};
/*
int main(int argc, char **argv)
{
    auto *item = new _868BinaryGap;
    cout << "ret: " << item->binaryGap(5) << endl;
}*/