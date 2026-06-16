class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt=0;
        ListNode* temp=head;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        if(cnt==n){
            return head->next;
        }
        int result=cnt-n;
        temp=head;
        while(temp!=NULL){
            result--;
            if(result==0){
                break;
            }
            temp=temp->next;
        }
        ListNode* deleteNode=temp->next;
        temp->next=temp->next->next;
        delete(deleteNode);
        return head;
    }
};
