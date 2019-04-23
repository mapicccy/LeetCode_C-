//
// Created by mapicccy on 2019/4/23.
//

#include <iostream>

using namespace std;

class _67AddBinary {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        string ret = "";
        //不能使用decltype(a.length())，为无符号，导致循环无法退出
        int i = a.length() - 1, j = b.length() - 1;

        while (i >= 0 || j >= 0 || carry == 1) {
            carry += (i >= 0) ? a[i--] - '0' : 0;
            carry += (j >= 0) ? b[j--] - '0' : 0;
            ret = char(carry % 2 + '0') + ret;
            carry /= 2;
        }
        return ret;
    }
};
/*
int main(int argc, char *argv[])
{
    auto *item = new _67AddBinary;
    cout << "ret: " << item->addBinary("1", "111") << endl;
}*/