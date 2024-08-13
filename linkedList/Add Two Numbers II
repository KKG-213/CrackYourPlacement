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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            stack<int>res, carry, first,second;

            ListNode *temp;
            temp=l1;

            while(temp!=NULL){
                first.push(temp->val);
                temp=temp->next;
            }
            temp=l2;
            while(temp!=NULL){
                second.push(temp->val);
                temp=temp->next;
            }
            int sum=0;
            while(!first.empty() || !second.empty()){
               sum=0;

               if(!first.empty()){
                   sum+= first.top();
                    first.pop();
               }
               if(!second.empty()){
                sum+=second.top();
               
               second.pop();
               }

               if(!carry.empty()){
               sum+=carry.top();
               carry.pop();
               }
               if(sum>9){
                 carry.push(sum/10);   
               }
               res.push(sum%10); 
            }
            
            while(!carry.empty()){
                res.push(carry.top());
                carry.pop();
            }
            
            ListNode *dummy= new ListNode();
            ListNode *temp1=dummy;
            while(!res.empty()){
                ListNode *newNode= new ListNode(res.top());
                res.pop();
                temp1->next=newNode;
                temp1=temp1->next;
            }
            return dummy->next;  
        
    }
};
