//
// Created by mapicccy on 2019/4/26.
//

#include <iostream>
#include <complex>

using namespace std;

class _43MultiplyString {
 /* 这种方法复杂度太高，打败5%的人。符合从小就学的手动乘法算式
private:
    string addTwoString(string num1, string num2) {
        int carry = 0, i = num1.size() - 1, j = num2.size() - 1;
        string ret = "";

        while (i >= 0 || j >= 0 || carry == 1) {
            int num = 0;
            if (i >= 0) num += (num1[i--] - '0');
            if (j >= 0) num += (num2[j--] - '0');
            num += carry;
            carry = num / 10;
            ret.insert(0, to_string(num % 10));
        }
        return ret;
    }
public:
    string multiply(string num1, string num2) {
        string ret = "";

        if (num1 == "0" || num2 == "0") return "0";

        for (int i = num2.size() - 1; i >= 0; i--) {
            string sum = "";
            for (int j = num1.size() - 1; j >= 0; j--) {
                sum = addTwoString(sum, to_string((num1[j] - '0') * (num2[i] - '0')) + string(num1.size() - j - 1, '0'));
            }
            ret = addTwoString(ret, sum + string(num2.size() - i -1, '0'));
        }
        return ret;
    }
 */
public:
    // 这种方法另辟蹊径，将乘法一般化，真是精妙。打败了100%的人
    string multiply(string num1, string num2) {
        int m = num1.size(), n = num2.size();
        string ans(m + n, '0');
        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                int sum = (num1[i] - '0') * (num2[j] - '0') + (ans[i + j + 1] - '0');
                ans[i + j + 1] = sum % 10 + '0';
                ans[i + j] += sum / 10;
            }
        }
        for (int i = 0; i < m + n; i++) {
            if (ans[i] != '0') {
                return ans.substr(i);
            }
        }
        return "0";
    }
};
/*
int main(int argc, char **argv)
{
    auto *item = new _43MultiplyString;
    cout << "ret: " << item->multiply("123", "10`1") << endl;
}*/
