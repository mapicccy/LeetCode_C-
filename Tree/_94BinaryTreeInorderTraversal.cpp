//
// Created by mapicccy on 2019/8/30.
//
#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class _94BinaryTreeInorderTraversal {
public:
    vector<int> inorderTraversal(TreeNode *root) {
        vector<TreeNode *> ret;
        vector<int> ret2;
        TreeNode *curr = root;
        if (curr != NULL) {
            while (!ret.empty() || curr) {
                if (curr) {
                    ret.push_back(curr);
                    curr = curr->left;
                } else {
                    curr = ret.back();
                    ret2.push_back(curr->val);
                    ret.pop_back();
                    curr = curr->right;
                }
            }
        }
        return ret2;
    }
};

int main(int argc, char *argv[]) {
    auto item = new _94BinaryTreeInorderTraversal();
    TreeNode *root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    vector<int> ret = item->inorderTraversal(root);
    for (int i = 0; i < ret.size(); ++i) {
        cout << ret.at(i) << endl;
    }
}