//
// Created by mapicccy on 2019/4/29.
//

#include <iostream>
#include <vector>

using namespace std;

class _942DIStringMatch {
public:
    vector<int> diStringMatch(string S) {
        int i = 0, j = S.size(), k = 0;
        vector<int> ret;
        while (k <= S.size()) {
            if (S[k] == 'I') {
                ret.push_back(i++);
            } else {
                ret.push_back(j--);
            }

            k++;
        }
        return ret;
    }
};