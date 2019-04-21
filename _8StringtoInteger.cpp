//
// Created by mapicccy on 2019/4/21.
//

#include <iostream>

using namespace std;

class _8StringtoInteger {
public:
    int myAtoi(string str) {
        for (char c: str) {
            if (isalpha(c)) return 0;
            if (isdigit(c)) break;
        }
        try {
            int ret = stoi(str);
            return ret;
        } catch (invalid_argument &e) {
            return 0;
        } catch (out_of_range &e) {
            return str.find(string(1, '-')) != string::npos ? INT32_MIN : INT32_MAX;
        }
    }
};
/*
int main(int argc, char *argv[])
{
    auto *item = new _8StringtoInteger;
    cout << "stoi: " << stoi("0x9999") << endl;
    cout << "ret: " << item->myAtoi("   -340") << endl;
}*/