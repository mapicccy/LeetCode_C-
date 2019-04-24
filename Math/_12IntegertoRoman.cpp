//
// Created by mapicccy on 2019/4/24.
//

#include <string>
#include <vector>

using namespace std;

class _12IntegertoRoman {
public:
    string intToRoman(int num) {
        int key[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
        vector<string> value = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
        string ret = "";

        for (int i = value.size() - 1; i >= 0; i--) {
            int p = num / key[i];

            while (p > 0) {
                ret.append(value[i]);
                p--;
            }

            num = num % key[i];
        }

        return ret;
    }
};