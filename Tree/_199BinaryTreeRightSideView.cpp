//
// Created by mapicccy on 2019/9/1.
//
#include <vector>
#include <queue>
#include "treenode.h"

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ret;
        if (!root) return ret;

        queue<TreeNode *> p, q;
        p.push(root);
        while (!p.empty()) {
            TreeNode *curr = p.front();
            p.pop();

            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);

            if (p.empty()) {
                ret.push_back(curr->val);
                p.swap(q);
            }
        }
        return ret;
    }
};