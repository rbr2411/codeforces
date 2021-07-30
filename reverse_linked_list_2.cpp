#include <bits/stdc++.h>
using namespace std;

// Reverse a portion of linked list only in one pass.
// Iterative Approach: TC - O(N), SC - O(1)
ListNode* reverseList(ListNode *head, int left, int right){
	if(head == NULL || head->next == NULL)
		return head;

	ListNode *dummy = new ListNode(0);
	dummy->next = head;

	ListNode *pre_it = NULL;
	ListNode *it = dummy;

	for(int i = 0; i < left; i++){
		pre_it = it;
		it = it->next;
	}

	ListNode *pre_R = pre_it, *it_R = it;
	// 0 -> 1 -> 2 -> 3 -> 4 -> 5

	for(int i = left; i <= right; i++){
		ListNode *forward = it_R->next;
		it_R->next = pre_R;
		pre_R = it_R;
		it_R = forward;
	}
	// 0 -> 1 <- 2 <- 3 <- 4 -> 5
	pre_it->next = pre_R;
	it->next = it_R;
	return dummy->next;
}

// Recursive Approach: TC - O(N), SC - O(N):
// here actually we have traversed the portion to be revesed twice.
// Once while filling the node val in vector
// Another time while changing the node values
ListNode* reverseListRecursion(ListNode *head, int left, int right){
	vector<int>v;
	ListNode *left_node = head;

	for(int i = 1; i < left; i++){
		left_node = left_node->next;
	}
	ListNode *right_node = left_node;
	for(int i = 0; i <= right-left; i++){
		v.push_back(right_node->val);
		right_node = right_node->next;
	}

	reverse(v.begin(), v.end());

	for(int i = 0; i < v.size(); i++){
		left_node->val = v[i];
	}

	return head;
}