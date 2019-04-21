//
// Created by mapicccy on 2019/4/21.
//
#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class _2AddTwoNumbers {
public:
    ListNode* addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *dummy = new ListNode(-1);
        ListNode *p = dummy;
        int carry = 0;
        while (l1 != nullptr || l2 != nullptr) {
            int num = 0;
            if (l1 != nullptr) {
                num += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                num += l2->val;
                l2 = l2->next;
            }
            num += carry;
            carry = num / 10;
            ListNode *tmp = new ListNode(num % 10);
            p->next = tmp;
            p = tmp;
        }

        if (carry != 0) {
            p->next = new ListNode(carry);
        }

        return dummy->next;
    }
};

int main(int argc, char *argv[])
{
    ListNode *l1 = new ListNode(2), *l2 = new ListNode(5);
    ListNode *ret = nullptr;

    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    _2AddTwoNumbers *item = new _2AddTwoNumbers;
    ret = item->addTwoNumbers(l1, l2);

    cout << "ret: " << ret->val << ret->next->val << ret->next->next->val << endl;
}