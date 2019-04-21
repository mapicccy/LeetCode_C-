//
// Created by mapicccy on 2019/4/21.
//
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

class _9PalindromeNumber {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x != 0 && x % 10 == 0)) return false;
        int sum = 0;

        //sum为回文的后半部分，x为前半部分
        while (x > sum) {
            sum = sum * 10 + x % 10;
            x /= 10;
        }

        return (x == sum) || (x == sum / 10);
    }
};
/*
int main(int argc, char *argv[])
{
    auto *item = new _9PalindromeNumber;
    cout << "ret: " << item->isPalindrome(22522) << endl;
}*/