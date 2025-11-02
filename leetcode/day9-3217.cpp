// Delete Nodes From Linked List Present in Array
#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> mpp(nums.begin(), nums.end());

        while (head && mpp.count(head->val))
            head = head->next;

        ListNode* curr = head;
        while (curr && curr->next) {
            while (curr->next && mpp.count(curr->next->val)) {
                curr->next = curr->next->next;
            }
            curr = curr->next;
        }
        return head;
    }
};

ListNode* addElement(ListNode* prevElement, int val) {
    ListNode* newElement = new ListNode(val);
    prevElement->next = newElement;
    return newElement;
}

int main() {
    Solution solution;
    vector<int> nums = {1,2,3};
    ListNode head = ListNode(1);
    addElement(addElement(addElement(addElement(&head, 2), 3), 4), 5);
    ListNode* newHead = solution.modifiedList(nums, &head);

    while (newHead != nullptr) {
        cout << newHead->val << " ";
        newHead = newHead->next;
    }

    return 0;
}
