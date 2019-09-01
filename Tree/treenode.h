//
// Created by mapicccy on 2019/9/1.
//

#ifndef LEETCODE_CPP_TREENODE_H
#define LEETCODE_CPP_TREENODE_H

#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

#endif //LEETCODE_CPP_TREENODE_H
