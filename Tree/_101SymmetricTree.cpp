//
// Created by mapicccy on 2019/9/1.
//

#include "treenode.h"

class _101SymmetricTree {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == NULL) return true;

        return helper(root->left, root->right);
    }

    bool helper(TreeNode *p, TreeNode *q) {
        if (!p && !q)
            return true;
        else if (!p || !q)
            return false;

        return p->val == q->val && helper(p->left, q->right) && helper(p->right, q->left);
    }
};