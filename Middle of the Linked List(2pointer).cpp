/******************************************************************************
876. Middle of the Linked List
Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.

 Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.
*******************************************************************************/
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode*slow=head;
        ListNode*Fast=head;
        
        while(Fast!=NULL && Fast->next!=NULL ){
            Fast=Fast->next->next;
            slow=slow->next;
            
        }
        return slow;
    }
};