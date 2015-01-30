#include <iostream>

using namespace std;

typedef struct ListNode{
	int val;
	ListNode *next;
	ListNode (int x):val(x),next(NULL) {}
};

ListNode *create_list(int *array,int size){
	ListNode *head_node = new ListNode(0);
	ListNode *current = head_node;
	for(int i = 0; i < size; ++i){
		ListNode *new_node = new ListNode(array[i]);
		current -> next = new_node;
		current = current -> next;
	}
	return head_node -> next;
}
//之所以用了pre就是为了考虑l1 > l2的时候，比较容易把l2的元素查到l1 之前，查元素不能插到本元素前面，所以一定要用pre就容易的多了。考虑的一下少了很多。
//
class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        if(l1 == NULL && l2 != NULL)
        	return l2;
        else if(l2 == NULL && l1 != NULL)
        	return l1;
        if(l1 == NULL & l2 == NULL)
        	return NULL;
        ListNode *start = new ListNode(0);
        start -> next = l1;
        ListNode *pre = start;
        while(l1 != NULL && l2 != NULL){
        	if(l1 -> val > l2 -> val){
        		ListNode *next = l2 -> next;
        		l2 -> next = pre -> next;	//插入的时候，一定把原来队列的尾指针还回去。
        		pre -> next = l2;
        		l2 = next;
        	}
        	else{
        		l1 = l1 -> next;
        	}
        	pre = pre -> next;
        }
        if(NULL != l2){
        	pre -> next = l2;
        }
        return temp->next;
    }
};



int main(){
	int array1[5] = {1,3,6,8,9};
	int array2[4] = {2,5,6,8 };
	ListNode *l1 = create_list(array1,5);
	ListNode *l2 = create_list(array2,4);
	Solution solution;
	solution.mergeTwoLists(l1,l2);
	/*
	while(l1 != NULL){
		cout << "l1 node is: " << l1 -> val <<endl;
		l1 = l1 -> next;
	}
	while(l2 != NULL){
		cout << "l2 node is: " << l2 -> val <<endl;
		l2 = l2 -> next;
	}
	*/
	return 0;
}	
