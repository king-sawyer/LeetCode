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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(!list1 && !list2){
            return nullptr;
        }

        int data=0;

        if(list1){
            if(list2){
                if(list1->val < list2->val){
                    data = list1->val;
                    list1 = list1->next;
                }else{
                    data = list2->val;
                    list2 = list2->next;
                }
            }else{
                data = list1->val;
                list1 = list1->next;
            }
        }else{
            data = list2->val;
            list2 = list2->next;
        }

        //Create and instiantiate returnList with lowest data
        ListNode *returnNode = new ListNode(data);
        ListNode *current = returnNode;

        while(list1 || list2){
            //If list 1 has data
            if(list1){
                //If list 2 has data
                if(list2){
                    //If list2 val is bigger than list1 val
                    if(list1->val < list2->val){
                        ListNode *newNode = new ListNode(list1->val);
                        current->next = newNode;
                        current = current->next;

                        list1 = list1->next;
                    //If list2 val is bigger than list1 val
                    }else{
                        ListNode *newNode = new ListNode(list2->val);
                        current->next = newNode;
                        current = current->next;

                        list2 = list2->next;
                    }
                //If list 2 does not have data   
                }else{
                    ListNode *newNode = new ListNode(list1->val);
                        current->next = newNode;
                        current = current->next;

                        list1 = list1->next;
                }
            //If list 1 does not have data
            }else{
                ListNode *newNode = new ListNode(list2->val);
                current->next = newNode;
                current = current->next;

                list2 = list2->next;
            }
        }

        return returnNode;
    }
};