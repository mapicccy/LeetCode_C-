//
// Created by mapicccy on 2019/8/10.
//

#include <vector>
#include <iostream>

using namespace std;

class _136SingleNumber {
public:
    int singleNumber(vector<int>& nums) {
        int ret = nums.at(0);
        for (int i = 1; i < nums.size(); i++) {
            ret ^= nums.at(i);
        }

        return ret;
    }
};
/*
int main(int argc, char* argv[]) {
    auto item = new _136SingleNumber();
    vector<int> nums;
    nums.push_back(4);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(2);
    int ret = item->singleNumber(nums);

    cout << "ret is " << ret;
}*/
