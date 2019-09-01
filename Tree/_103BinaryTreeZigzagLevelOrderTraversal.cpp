//
// Created by mapicccy on 2019/9/1.
//
#include <vector>
#include <deque>
#include "treenode.h"


class _103BinaryTreeZigzagLevelOrderTraversal {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ret;
        if (!root) return ret;

        deque<TreeNode *> p, q;
        vector<int> tmp;
        p.push_back(root);
        bool lr = true;
        while (!p.empty()) {
            TreeNode *curr;
            if (lr) {
                curr = p.front();
                p.pop_front();
                if (curr->left) q.push_back(curr->left);
                if (curr->right) q.push_back(curr->right);
            } else {
                curr = p.back();
                p.pop_back();
                if (curr->right) q.push_front(curr->right);
                if (curr->left) q.push_front(curr->left);
            }

            tmp.push_back(curr->val);
            if (p.empty()) {
                lr = !lr;
                ret.push_back(tmp);
                tmp.clear();
                p.swap(q);
            }
        }

        return ret;
    }
};
/*
int main(int argc, char *argv[]) {
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->right->right = new TreeNode(5);

    auto item = new _103BinaryTreeZigzagLevelOrderTraversal();
    item->zigzagLevelOrder(root);
}*/