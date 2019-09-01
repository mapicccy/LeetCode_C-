//
// Created by mapicccy on 2019/9/1.
//

#include <vector>
#include <queue>
#include "treenode.h"

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ret;
        vector<int> tmp;
        if (!root) return ret;

        TreeNode *last = root;
        queue<TreeNode *> q, p;
        q.push(root);
        while (!q.empty()) {
            TreeNode *curr = q.front();
            tmp.push_back(curr->val);
            q.pop();

            if (curr->left) p.push(curr->left);
            if (curr->right) p.push(curr->right);

            if (q.empty()) {
                q.swap(p);
                ret.push_back(tmp);
                tmp.clear();
            }
        }

        return ret;
    }
};