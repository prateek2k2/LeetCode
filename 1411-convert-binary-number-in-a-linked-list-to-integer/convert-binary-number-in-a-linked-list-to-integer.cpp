/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int sizeoflist(ListNode* head)
    {
        int c=0;
        while(head!=NULL)
        {
            c++;
            head=head->next;
        }
        return c;

    }
    int getDecimalValue(ListNode* head) {
        int size=sizeoflist(head);
        int decimal=0;
        for(int i=size-1;i>=0;i--)
        {
        if(head!=NULL)
        {
            if(head->val==1)
            decimal+=pow(2,i);
            head=head->next;
        }
        }
        return decimal;

    }
};