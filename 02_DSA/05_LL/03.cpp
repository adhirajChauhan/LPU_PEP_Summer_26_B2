https://leetcode.com/problems/middle-of-the-linked-list//**
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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow ->next;
            fast = fast->next->next;
        }
        return slow;

    }
};



https://www.geeksforgeeks.org/problems/reverse-a-linked-list/1

/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = nullptr ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        Node* currNode = head;
        Node* prevNode = NULL;
        Node* nextNode = NULL;
        
        while(currNode!=NULL){
            nextNode = currNode->next;
            currNode->next = prevNode;
            prevNode = currNode;
            currNode = nextNode;
        }
        return prevNode;
        
        
    }
};


https://www.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1

/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = nullptr;
    }
};*/

class Solution {
  public:
    Node* reverse(Node* head){
        Node* currNode = head;
        Node* prevNode = NULL;
        Node* nextNode = NULL;
        
        while(currNode!=NULL){
            nextNode = currNode->next;
            currNode->next = prevNode;
            prevNode = currNode;
            currNode = nextNode;
        }
        return prevNode;    
    }
    bool isPalindrome(Node *head) {
        //  code here
        Node* fast = head;
        Node* slow = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow = reverse(slow);
        Node* p1 = head;
        Node* p2 = slow;
        
        while(p2){
            if(p1->data != p2->data) return false;
            p1 = p1->next;
            p2 = p2->next;
        }
        return true;

        
    }
};



https://leetcode.com/problems/intersection-of-two-linked-lists/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* pA = headA;
        ListNode* pB = headB;

        while(pA != pB){
            if(pA == NULL){
                pA = headB;
            }
            else pA = pA->next;

            if(pB == NULL){
                pB = headA;
            }
            else pB = pB->next;
        }
        return pA;

        
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int findLength(ListNode* head){
        int length = 0;
        ListNode* temp = head;
        while(temp != NULL){
            length++;
            temp = temp->next;
        }
        return length;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = findLength(headA); //5
        int lenB = findLength(headB); //6

        ListNode* pA = headA;
        ListNode* pB = headB;

        int deffInLength = abs(lenA - lenB); //1

        if(lenB > lenA){
            while(diffInLength--){
                pB = pB->next;
            }
        }
        else{
            while(diffInLength--){
                pA = pA->next;
            }
        }
        while(pA !+ pB){
            pA = pA->next;
            pB = pB->next;
        }
        return pA;


    }
};














