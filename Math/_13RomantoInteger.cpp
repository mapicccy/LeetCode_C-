//
// Created by mapicccy on 2019/4/22.
//
#include <iostream>
#include <unordered_map>

using namespace std;

class _13RomantoInteger {
public:
    int romanToInt(string s) {
        unordered_map<char, int> map = {{'I', 1},
                                        {'V', 5},
                                        {'X', 10},
                                        {'L', 50},
                                        {'C', 100},
                                        {'D', 500},
                                        {'M', 1000}};

        decltype(s.length()) i;
        int sum = map[s.back()];
        for (i = 0; i < s.length() - 1; i++) {
            if (map[s[i]] < map[s[i + 1]]) {
                sum -= map[s[i]];
            } else {
                sum += map[s[i]];
            }
        }

        return sum;
    }
};
/*
int main(int argc, char *argv[])
{
    auto item = new _13RomantoInteger;
    cout << "ret: " << item->romanToInt("MCMXCIV") << endl;
}*/